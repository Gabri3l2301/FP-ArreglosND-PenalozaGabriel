#include <iostream>
using namespace std;

void rellenarMatriz(int matriz[][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << "Ingrese el valor de la matriz [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void sumaDiagonales(int matriz[][4], int filas, int columnas){
    int sumaDiagonales = 0;
    for (int i = 0; i < filas; i++){
        sumaDiagonales += matriz[i][i];
        sumaDiagonales += matriz [i][columnas - 1 - i];
    }
    cout << "La suma de las diagonales es: " << sumaDiagonales << endl;
}

int main (){
    int m = 4;//filas
    int n = 4;//columnas
    int matriz[4][4];

    rellenarMatriz(matriz);
    sumaDiagonales(matriz, m, n);
    return 0;
}