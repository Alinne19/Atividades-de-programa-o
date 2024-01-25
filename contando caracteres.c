#include <stdio.h>

#define TAMANHO_ALFABETO 26


void contarCaracteres(const char *frase) {
    
    int contagem[TAMANHO_ALFABETO] = {0};

   
    for (const char *ptr = frase; *ptr != '\0'; ++ptr) {
       
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            
            char caractereMinusculo = (*ptr >= 'A' && *ptr <= 'Z') ? (*ptr + 'a' - 'A') : *ptr;
            
            
            contagem[caractereMinusculo - 'a']++;
        }
    }

   
    for (int i = 0; i < TAMANHO_ALFABETO; ++i) {
        char caractere = 'a' + i;
        printf("%c: %d\n", caractere, contagem[i]);
    }
}

int main() {
    char frase[100];

    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    
    contarCaracteres(frase);

    return 0;
}
