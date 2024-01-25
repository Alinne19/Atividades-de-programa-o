#include <stdio.h>


double calcularQuadrado(double numero) {
    return numero * numero;
}

int main() {
    double numero;

    do {
        
        printf("Digite um numero: ");
        scanf("%lf", &numero);

        /
        printf("O quadrado de %.2f é %.2f.\n", numero, calcularQuadrado(numero));

       
        char opcao;
        printf("Deseja realizar outro calculo? (S/N): ");
        scanf(" %c", &opcao);

        
        while (getchar() != '\n');

        
        if (opcao != 'S' && opcao != 's') {
            printf("Programa encerrado. Obrigado!\n");
            break;
        }

    } while (1); 

    return 0;
}
