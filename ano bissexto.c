#include <stdio.h>


int ehBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1; // É bissexto
    } else {
        return 0; 
}

int main() {
    int ano;

    do {
       
        printf("Digite um ano para verificar se é bissexto: ");
        scanf("%d", &ano);

        
        if (ehBissexto(ano)) {
            printf("%d é um ano bissexto.\n", ano);
        } else {
            printf("%d não é um ano bissexto.\n", ano);
        }

       
        char opcao;
        printf("Deseja verificar outro ano? (S/N): ");
        scanf(" %c", &opcao);

       
        while (getchar() != '\n');

        
        if (opcao != 'S' && opcao != 's') {
            printf("Programa encerrado. Obrigado!\n");
            break;
        }

    } while (1);  

    return 0;
}
