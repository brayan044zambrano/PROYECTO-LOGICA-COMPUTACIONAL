
#include <iostream>
using namespace std;

struct Pasajero {
    string nombre;
    int cedula;
    string clase;
    string posicion;
};

int main() {
    int n;
    cout << "¿Cuántos pasajeros desea registrar? ";
    cin >> n;

    Pasajero pasajeros[50];  // máximo 50 pasajeros

    // Registro de pasajeros
    for (int i = 0; i < n; i++) {
        cout << "\nPasajero " << i + 1 << endl;

        cout << "Nombre (una palabra): ";
        cin >> pasajeros[i].nombre;

        cout << "Cedula: ";
        cin >> pasajeros[i].cedula;

        cout << "Clase (Ejecutiva o Economica): ";
        cin >> pasajeros[i].clase;

        cout << "Posicion (Ventana o Pasillo";
        if (pasajeros[i].clase == "Economica") {
            cout << " o Centro";
        }
        cout << "): ";
        cin >> pasajeros[i].posicion;

        // Validación básica
        if (pasajeros[i].clase == "Ejecutiva" && pasajeros[i].posicion == "Centro") {
            cout << "Error: En clase Ejecutiva no existe la posición Centro.\n";
            i = i - 1; // repetir el registro
        } else {
            cout << "Reserva registrada.\n";
        }
    }

    // Consulta de reserva
    int cedula_buscar;
    cout << "\nIngrese la cedula para buscar una reserva: ";
    cin >> cedula_buscar;

    bool encontrado = false;

    for (int i = 0; i < n; i++) {
        if (pasajeros[i].cedula == cedula_buscar) {
            cout << "\nReserva encontrada:\n";
            cout << "Nombre: " << pasajeros[i].nombre << endl;
            cout << "Clase: " << pasajeros[i].clase << endl;
            cout << "Posicion: " << pasajeros[i].posicion << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No se encontró ninguna reserva con esa cedula.\n";
    }

    return 0;
}


////////

#include <iostream>
using namespace std;

struct cliente {
    
    string nom , ape , cor;
    int long cont , cc;
  
};

int main() {
    int a;
    int i;
    cout<<"ingrese la cantidad de clientes que desea registrar en la aerolinea: ";
    cin>>a;
    cliente usuarios[a];
    for(i=0; i<a; i++) {
        cout<<"\n*** Cliente "<<i+1<<" ***";
        cout<<"\nNombre: ";
        cin>>usuarios[i].nom;
        cout<<"\nApellido: ";
        cin>>usuarios[i].ape;
        cout<<"\nCedula:";
        cin>>usuarios[i].cc;
        cout<<"\nContacto:";
        cin>>usuarios[i].cont;
        cout<<"\nCorreo:";
        cin>>usuarios[i].cor;
        cout<<"\n\n¡Usuario registrado exitosamente!";
 		
 	}
 }