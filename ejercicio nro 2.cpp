#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2, resultado;
   char calcular;
   
   do{
    cout << "ingrese primer valor: ";
    cin >> num1;
   
    cout << "ingrese segundo valor: ";
    cin >> num2;
   
    cout << "Calculadora" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Seleccione una operacion (1, 2, 3 o 4)"<<endl;
    cin >> opcion;
   
    switch (opcion) {
        case 1:
            cout << "Elegiste la opcion Suma." << endl;
            resultado = num1 + num2;
            cout << "El resultado es: " << resultado << endl;
            break;
           
        case 2:
            cout << "Elegiste la opcion Resta." << endl;
            resultado = num1 - num2;
            cout << "El resultado es: " << resultado << endl;
            break;
           
        case 3:
            cout << "Elegiste la opcion Multiplicacion." << endl;
            resultado = num1 * num2;
            cout << "El resultado es: " << resultado << endl;
            break;
           
        case 4:
            cout << "Elegiste la opcion Division." << endl;
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
           
        default:
            cout << "Opcion invalida." << endl;
            break;
    }
   
   cout<<"desea calcular otra opcion(s=1,n=2)"<<endl;
   cin>> calcular;
 
   }while(calcular =='s' || 'S');
    return 0;
}
