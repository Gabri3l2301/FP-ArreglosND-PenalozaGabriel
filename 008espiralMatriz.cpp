#include <iostream>
using namespace std;

const int TAM = 5;

void rellenarMatriz(int matriz[][TAM], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el valor de la matriz [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void imprimirEspiral(int matriz[][TAM], int n) {
    int inicioFila = 0, finFila = n - 1;
    int inicioCol = 0, finCol = n - 1;

    cout << "Recorrido en espiral: ";
    while (inicioFila <= finFila && inicioCol <= finCol) {
        // Arriba izquierda a derecha
        for (int j = inicioCol; j <= finCol; j++)
            cout << matriz[inicioFila][j] << " ";
        inicioFila++;

        // Derecha arriba a abajo
        for (int i = inicioFila; i <= finFila; i++)
            cout << matriz[i][finCol] << " ";
        finCol--;

        // Abajo derecha a izquierda
        if (inicioFila <= finFila) {
            for (int j = finCol; j >= inicioCol; j--)
                cout << matriz[finFila][j] << " ";
            finFila--;
        }

        // Izquierda abajo a arriba
        if (inicioCol <= finCol) {
            for (int i = finFila; i >= inicioFila; i--)
                cout << matriz[i][inicioCol] << " ";
            inicioCol++;
        }
    }
    cout << endl;
}

int main (){
    
    return 0;
}