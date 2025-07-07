#include <iostream>
using namespace std;

int main() {
    const int TAM = 4;
    int matriz[TAM][TAM] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15,16}
    };

    int fila1, fila2;

    cout << "Matriz original:\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nIngrese el número de la primera fila a intercambiar (0-3): ";
    cin >> fila1;
    cout << "Ingrese el número de la segunda fila a intercambiar (0-3): ";
    cin >> fila2;

    for (int j = 0; j < TAM; j++) {
        int temp = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }

    cout << "\nMatriz resultante:\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}