/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

// Calcular  média
float calcularMedia(float notas[], int tamanho) {
    float soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += notas[i];
    }

    return soma / tamanho;
}

// Contar notas acima da média
int contarAcimaDaMedia(float notas[], int tamanho, float media) {
    int contador = 0;

    for (int i = 0; i < tamanho; i++) {
        if (notas[i] > media) {
            contador++;
        }
    }

    return contador;
}

// Encontrar a maior nota
float encontrarMaiorNota(float notas[], int tamanho) {
    float maior = notas[0]; // Assume que a primeira é a maior

    for (int i = 1; i < tamanho; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

int main() {

    float notas[] = {7.5, 4.0, 9.2, 5.5, 8.0, 6.5, 3.2, 10.0, 7.0, 5.8};
    int tamanho = 10;

    float media = calcularMedia(notas, tamanho);
    int acimaMedia = contarAcimaDaMedia(notas, tamanho, media);
    float maiorNota = encontrarMaiorNota(notas, tamanho);

    cout << "Media das notas: " << media << endl;
    cout << "Quantidade acima da media: " << acimaMedia << endl;
    cout << "Maior nota: " << maiorNota << endl;

    return 0;
}
