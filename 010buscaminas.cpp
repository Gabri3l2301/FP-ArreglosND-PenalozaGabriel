#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TAM = 10;

void generarTablero(int tablero[][TAM], int filas, int columnas) {
    srand(time(0));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            tablero[i][j] = rand() % 2; // 1 = mina, 0 = vacío
        }
    }
}

int main (){

    return 0;
}