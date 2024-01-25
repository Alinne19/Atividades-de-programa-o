#include <stdio.h>


long long calcularFatorial(int numero) {
    if (numero < 0) {
        return -1; 
    }

    long long resultado = 1;

    for (int i = 2; i <= numero; ++i) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    long long resultadoFatorial = calcularFatorial(numero);

    
    if (resultadoFatorial == -1) {
        printf("O fatorial de numeros negativos nao e definido.\n");
    } else {
        // Imprime o resultado
        printf("O fatorial de %d é: %lld\n", numero, resultadoFatorial);
    }

    return 0;
}
