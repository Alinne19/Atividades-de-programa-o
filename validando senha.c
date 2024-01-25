#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Função para verificar se uma senha atende aos critérios
int validarSenha(const char *senha) {
    int temLetraMaiuscula = 0;
    int temLetraMinuscula = 0;
    int temNumero = 0;
    int temCaractereEspecial = 0;

    const char *ptr; // Declaração da variável ptr

    for (ptr = senha; *ptr != '\0'; ++ptr) {
        if (isupper(*ptr)) {
            temLetraMaiuscula = 1;
        } else if (islower(*ptr)) {
            temLetraMinuscula = 1;
        } else if (isdigit(*ptr)) {
            temNumero = 1;
        } else if (!isalnum(*ptr)) {
            temCaractereEspecial = 1;
        }
    }

    return (temLetraMaiuscula && temLetraMinuscula && temNumero && temCaractereEspecial && (ptr - senha) >= 8);
}

int main() {
    char senha[100];

    // Solicita a senha ao usuário
    printf("Digite a senha: ");
    fgets(senha, sizeof(senha), stdin);

    // Remove o caractere de nova linha, se presente
    if (senha[strlen(senha) - 1] == '\n') {
        senha[strlen(senha) - 1] = '\0';
    }

    // Chama a função para validar a senha
    if (validarSenha(senha)) {
        printf("A senha é válida.\n");
    } else {
        printf("A senha não atende aos critérios especificados.\n");
    }

    return 0;
}

