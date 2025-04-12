#include <iostream>
using namespace std;

struct avion{
    int numerosillas;
    int ejecutivas;
    int economicas;
    int ocupacion;
    int calculo;
    int calculo2;
    
    
    void totalnumerosillas();
    void totalejecutivas();
    void totaleconomicas();
    void totalocupacion();
};
void avion:: totalnumerosillas(){
    cout<<"Ingrese la cantidad de sillas totales\n";
    cin>>numerosillas;
};
////


void avion::totalejecutivas(){
    cout<<"Ingrese la cantidad de sillas ejecutivas:\n";
    cin>>ejecutivas;
};
/////
void avion::totaleconomicas(){
    cout<<"Ingrese la cantidad de sillas economicas\n";
    cin>>economicas;
};
////
void avion::totalocupacion(){
    calculo = ejecutivas + economicas *100/50 ;
    cout<<calculo;
};
////
int main(){
   avion sillas,s2,s3,s4;
   sillas.totalnumerosillas();
  
   
   s2.totalejecutivas();
   s3.totaleconomicas();
   s4.totalocupacion();
   
}





/////////STRUCT 2 ///////


#include <iostream>
using namespace std;

struct Pasajero {
    // ENTIDAD #2: DATOS DEL PASAJERO
    //ATRIBUTOS
    string nombre;
    string apellido;
    string cedula;
    string contacto;
    string correo;  
    //METODOS
    void ingresarDatos();
    void mostrarDatos();
};
void Pasajero::ingresarDatos() {
    cout << "Ingrese el nombre del pasajero: ";
    cin >> nombre;
    cout << "Ingrese el apellido del pasajero: ";
    cin >> apellido;
    cout << "Ingrese la cédula del pasajero: ";
    cin >> cedula;
    cout << "Ingrese el contacto del pasajero: ";
    cin >> contacto;
    cout << "Ingrese el correo electrónico del pasajero: ";
    cin >> correo;  
}
void Pasajero::mostrarDatos() {
    cout << "\n\n   Identidad del Pasajero \n";
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Cédula: " << cedula << endl;
    cout << "Contacto: " << contacto << endl;
    cout << "Correo electrónico: " << correo << endl;  
}
int main() {
    Pasajero p1;
    p1.ingresarDatos();
    p1.mostrarDatos();
    
}
