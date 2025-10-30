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

    cout << "Estoy pensando en un n�mero entre 1 y 100. �Puedes adivinar cu�l es?" << endl;

    do {
        cout << "Introduce tu n�mero: ";
        cin >> intento;
        intentos++;

        if (intento > numeroSecreto) {
            cout << "El n�mero es m�s peque�o. �Intenta de nuevo!" << endl;
        } else if (intento < numeroSecreto) {
            cout << "El n�mero es m�s grande. �Intenta de nuevo!" << endl;
        } else {
            cout << "�Felicidades! Adivinaste el n�mero secreto en " << intentos << " intentos." << endl;
        }
    } while (intento != numeroSecreto);

    return 0;
}
