#include <stdio.h>
#include <math.h>


int verificarPrimo(int numero) {
    if (numero <= 1) {
        return 0; 
    }

    int limite = (int)sqrt(numero); 
    for (int i = 2; i <= limite; ++i) {
        if (numero % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (verificarPrimo(numero)) {
        printf("O numero %d eh primo.\n", numero);
    } else {
        printf("O numero %d nao eh primo.\n", numero);
    }

    return 0;
}

