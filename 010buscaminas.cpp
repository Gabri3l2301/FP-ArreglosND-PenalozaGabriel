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

void calcularNumeros(int tablero[][TAM], int numeros[][TAM], int filas, int columnas) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (tablero[i][j] == 1) {
                numeros[i][j] = -1; // -1 indica mina
            } else {
                int cuenta = 0;
                for (int k = 0; k < 8; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if (ni >= 0 && ni < filas && nj >= 0 && nj < columnas && tablero[ni][nj] == 1) {
                        cuenta++;
                    }
                }
                numeros[i][j] = cuenta;
            }
        }
    }
}

int main (){

    return 0;
}