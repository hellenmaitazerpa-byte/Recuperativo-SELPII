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

    cout << "Estoy pensando en un número entre 1 y 100. ¿Puedes adivinar cuál es?" << endl;

    do {
        cout << "Introduce tu número: ";
        cin >> intento;
        intentos++;

        if (intento > numeroSecreto) {
            cout << "El número es más pequeño. ¡Intenta de nuevo!" << endl;
        } else if (intento < numeroSecreto) {
            cout << "El número es más grande. ¡Intenta de nuevo!" << endl;
        } else {
            cout << "¡Felicidades! Adivinaste el número secreto en " << intentos << " intentos." << endl;
        }
    } while (intento != numeroSecreto);

    return 0;
}
