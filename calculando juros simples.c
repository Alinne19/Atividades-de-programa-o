#include <stdio.h>


double calcularMontante(double capitalInicial, double taxaJuros, int periodo) {
    return capitalInicial * (1 + (taxaJuros / 100) * periodo);
}

int main() {
    double capitalInicial, taxaJuros;
    int periodo;

  
    printf("Digite o Capital Inicial: ");
    scanf("%lf", &capitalInicial);

    printf("Digite a Taxa de Juros (em porcentagem): ");
    scanf("%lf", &taxaJuros);

    printf("Digite o Periodo (em anos): ");
    scanf("%d", &periodo);

    
    double montanteFinal = calcularMontante(capitalInicial, taxaJuros, periodo);

   
    printf("O Montante Final é: %.2f\n", montanteFinal);

    return 0;
}

