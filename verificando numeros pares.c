#include <stdio.h>


int verificarParidade(int numero) {
    
    if ((numero & 1) == 0) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (verificarParidade(numero)) {
        printf("O numero %d eh par.\n", numero);
    } else {
        printf("O numero %d eh impar.\n", numero);
    }

    return 0;
}

