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

int main (){
    int matriz[4][4];

    rellenarMatriz(matriz);
    return 0;
}