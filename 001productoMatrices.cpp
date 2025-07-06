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

int main (){
    int matriz1[3][3];
    int matriz2[3][3];
    int producto[3][3];
    rellenarMatriz(matriz1);
    rellenarMatriz(matriz2);

    return 0;
}