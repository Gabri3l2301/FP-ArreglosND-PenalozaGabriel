#include <iostream>
using namespace std;

const int TAM = 6;

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

int main (){

    return 0;
}