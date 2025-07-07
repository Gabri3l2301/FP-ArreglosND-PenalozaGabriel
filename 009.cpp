#include <iostream>
using namespace std;

void imprimirCuadradoLatino(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // La fórmula genera la rotación a la derecha
            cout << ((j - i + N) % N + 1) << " ";
        }
        cout << endl;
    }
}

int main (){
    int N;
    cout << "Ingrese el orden del cuadrado latino: ";
    cin >> N;
    imprimirCuadradoLatino(N);
    return 0;
}