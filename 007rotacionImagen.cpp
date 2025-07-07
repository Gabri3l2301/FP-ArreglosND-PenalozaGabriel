#include <iostream>
using namespace std;

const int TAM = 4;

void rellenarMatriz(int matriz[][TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el valor de la matriz [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[][TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void rotar90Horario(int matriz[][TAM], int resultado[][TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[j][filas - 1 - i] = matriz[i][j];
        }
    }
}

int main() {
    int matriz[TAM][TAM];
    int rotada[TAM][TAM];

    rellenarMatriz(matriz, TAM, TAM);

    cout << "\nMatriz original:" << endl;
    imprimirMatriz(matriz, TAM, TAM);

    rotar90Horario(matriz, rotada, TAM, TAM);

    cout << "\nMatriz rotada 90 grados en sentido horario:" << endl;
    imprimirMatriz(rotada, TAM, TAM);

    return 0;
}