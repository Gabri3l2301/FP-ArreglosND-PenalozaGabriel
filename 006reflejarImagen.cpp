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

void reflejarHorizontalmente(int matriz[][TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas / 2; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][columnas - 1 - j];
            matriz[i][columnas - 1 - j] = temp;
        }
    }
}

int main (){
    int matriz[TAM][TAM];

    cout << "Ingrese los valores de la matriz 6x6:" << endl;
    rellenarMatriz(matriz, TAM, TAM);

    cout << "\nMatriz original:" << endl;
    imprimirMatriz(matriz, TAM, TAM);

    reflejarHorizontalmente(matriz, TAM, TAM);

    cout << "\nMatriz reflejada horizontalmente:" << endl;
    imprimirMatriz(matriz, TAM, TAM);
    
    return 0;
}