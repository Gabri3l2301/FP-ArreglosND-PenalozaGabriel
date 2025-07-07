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

void encontrarMaxMin(int matriz[][TAM], int filas, int columnas) {
    int max = matriz[0][0], min = matriz[0][0];
    int maxFila = 0, maxCol = 0, minFila = 0, minCol = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
                maxFila = i;
                maxCol = j;
            }
            if (matriz[i][j] < min) {
                min = matriz[i][j];
                minFila = i;
                minCol = j;
            }
        }
    }
    cout << "El valor máximo es " << max << " en la posición [" << maxFila << "][" << maxCol << "]" << endl;
    cout << "El valor mínimo es " << min << " en la posición [" << minFila << "][" << minCol << "]" << endl;
}

int main (){
    
    return 0;
}