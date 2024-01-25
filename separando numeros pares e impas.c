#include <stdio.h>

void separarParesImpares(int lista[], int tamanho) {
    printf("Números Pares\tNúmeros Ímpares\n");
    printf("--------------------------------\n");

   
    for (int i = 0; i < tamanho; ++i) {
        if (lista[i] % 2 == 0) {
           
            printf("%-15d", lista[i]);
        } else {
            
            printf("\t\t%d\n", lista[i]);
        }
    }

    printf("\n");
}

int main() {
    int tamanho;

    
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanho);

    int lista[tamanho];

    
    printf("Digite os numeros da lista:\n");
    for (int i = 0; i < tamanho; ++i) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    
    separarParesImpares(lista, tamanho);

    return 0;
}
