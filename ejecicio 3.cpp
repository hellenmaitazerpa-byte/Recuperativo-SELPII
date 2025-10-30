// ejecicio 3
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));
    int numeroSecreto = rand() % 100 + 1; 
    int intento;
    int intentos = 0;

    cout << "Estoy pensando en un numero entre 1 y 100. puedes adivinar cual es?" << endl;

    do {
        cout << "Introduce tu numero: ";
        cin >> intento;
        intentos++;

        if (intento > numeroSecreto) {
            cout << "El numero es muy pequeno. !ntenta de nuevo!" << endl;
        } else if (intento < numeroSecreto) {
            cout << "El numero es muy grande. !ntenta de nuevo!" << endl;
        } else {
            cout << "; Adivinaste el numero secreto en " << intentos << " intentos." << endl;
        }
    } while (intento != numeroSecreto);

    return 0;
}
