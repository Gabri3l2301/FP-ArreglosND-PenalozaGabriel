#include <iostream>
using namespace std;

const int TAM = 4;

void imprimirMatriz(int matriz[][TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void intercambiarFilas(int matriz[][TAM], int fila1, int fila2, int columnas) {
    for (int j = 0; j < columnas; j++) {
        int temp = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }
}

int main() {
    int matriz[TAM][TAM] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15,16}
    };
    int fila1;
    int fila2;

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz, TAM, TAM);

    cout << "\nIngrese el numero de la primera fila a intercambiar (0-3): ";
    cin >> fila1;
    cout << "Ingrese el numero de la segunda fila a intercambiar (0-3): ";
    cin >> fila2;
    intercambiarFilas(matriz, fila1, fila2, TAM);

    cout << "\nMatriz resultante:" << endl;
    imprimirMatriz(matriz, TAM, TAM);
    return 0;
}