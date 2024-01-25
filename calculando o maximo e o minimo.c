#include <stdio.h>


double calcularMinimo(double lista[], int tamanho) {
    double minimo = lista[0];

    for (int i = 1; i < tamanho; ++i) {
        if (lista[i] < minimo) {
            minimo = lista[i];
        }
    }

    return minimo;
}


double calcularMaximo(double lista[], int tamanho) {
    double maximo = lista[0];

    for (int i = 1; i < tamanho; ++i) {
        if (lista[i] > maximo) {
            maximo = lista[i];
        }
    }

    return maximo;
}

int main() {
    int tamanho = 0;
    double numero;
    double lista[1000]; 


    do {
        printf("Digite um numero (negativo para encerrar): ");
        scanf("%lf", &numero);

        if (numero >= 0) {
            lista[tamanho] = numero;
            tamanho++;
        }
    } while (numero >= 0);

   
    double minimo = calcularMinimo(lista, tamanho);
    double maximo = calcularMaximo(lista, tamanho);

    
    printf("Valor Minimo: %.2f\n", minimo);
    printf("Valor Maximo: %.2f\n", maximo);

    return 0;
}
