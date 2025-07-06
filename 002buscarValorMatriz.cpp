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

void buscarValorMatriz(int matriz[][3], int valor){
    cout << "Ingresa el valor que desea buscar: ";
    cin >> valor;
    cout << "El valor " << valor << " se encuentra en:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (valor == matriz[i][j]){
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }
}

int main (){
    int matriz[3][3];

    rellenarMatriz(matriz);

    return 0;
}