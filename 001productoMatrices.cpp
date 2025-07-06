#include <iostream>
using namespace std;

void rellenarMatriz(int matriz[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingrese el valor de la matriz [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void productoMatriz(int matrizA[][3], int matrizB[][3], int producto[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                producto[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void imprimirMatrices(int matrizA[][3], int matrizB[][3], int producto[][3]){
    cout << "\nMatriz 1\t\tMatriz 2\t\tProducto\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matrizA[i][j] << " ";
        }
        cout << "\t\t\t";

        for (int j = 0; j < 3; j++){
            cout << matrizB[i][j] << " ";
        }
        cout << "\t\t\t";
        
        for (int j = 0; j < 3; j++){
            cout << producto[i][j] << " ";
        }
        cout << endl;
    } 
}

int main (){
    int matriz1[3][3];
    int matriz2[3][3];
    int producto[3][3] = {};

    cout << "Datos de la matriz 1:" << endl;
    rellenarMatriz(matriz1);
    cout << "Datos de la matriz 2:" << endl;
    rellenarMatriz(matriz2);

    productoMatriz(matriz1, matriz2, producto);

    imprimirMatrices(matriz1, matriz2, producto);
    return 0;
}