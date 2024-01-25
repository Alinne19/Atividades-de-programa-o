#include <stdio.h>
#include <string.h>
#include <ctype.h>


int ehPalindromo(const char *texto) {
    int inicio = 0;
    int fim = strlen(texto) - 1;

    while (inicio < fim) {
        
        while (isspace(texto[inicio]) && inicio < fim) {
            inicio++;
        }

        while (isspace(texto[fim]) && inicio < fim) {
            fim--;
        }

      
        if (tolower(texto[inicio]) != tolower(texto[fim])) {
            return 0;  
        }

        inicio++;
        fim--;
    }

    return 1;  
}

int main() {
    char texto[1000];

    
    printf("Digite uma palavra ou frase para verificar se é um palindromo: ");
    fgets(texto, sizeof(texto), stdin);

   
    if (texto[strlen(texto) - 1] == '\n') {
        texto[strlen(texto) - 1] = '\0';
    }

   
    if (ehPalindromo(texto)) {
        printf("A palavra ou frase é um palindromo.\n");
    } else {
        printf("A palavra ou frase não é um palindromo.\n");
    }

    return 0;
}
