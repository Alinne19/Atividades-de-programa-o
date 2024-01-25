#include <stdio.h>


float calcularMediaAvaliacoes(float notaEscrita, float notaPratica) {
    return (notaEscrita + notaPratica) / 2;
}


float calcularMediaAtividades(int totalAtividades, int atividadesRealizadas) {
    return (float)atividadesRealizadas / totalAtividades * 10;  
}


float calcularMediaBimestre(float mediaAvaliacoes, float mediaAtividades) {
    return (mediaAvaliacoes + mediaAtividades) / 2;
}


float calcularMediaFinal(float mediaBimestre1, float mediaBimestre2, float mediaBimestre3, float mediaBimestre4) {
    return ((mediaBimestre1 + mediaBimestre3) * 3 + (mediaBimestre2 + mediaBimestre4) * 2) / 10;
}

int main() {
    float notaEscrita, notaPratica;
    int totalAtividades, atividadesRealizadas;

    float mediaBimestres[4];  

    for (int i = 0; i < 4; ++i) {
        // Solicitar as informações para cada bimestre
        printf("Bimestre %d:\n", i + 1);
        printf("Nota da avaliacao escrita: ");
        scanf("%f", &notaEscrita);
        printf("Nota da avaliacao pratica: ");
        scanf("%f", &notaPratica);
        printf("Total de atividades: ");
        scanf("%d", &totalAtividades);
        printf("Atividades realizadas: ");
        scanf("%d", &atividadesRealizadas);

        
        float mediaAvaliacoes = calcularMediaAvaliacoes(notaEscrita, notaPratica);
        float mediaAtividades = calcularMediaAtividades(totalAtividades, atividadesRealizadas);
        mediaBimestres[i] = calcularMediaBimestre(mediaAvaliacoes, mediaAtividades);
    }

    
    float mediaFinal = calcularMediaFinal(mediaBimestres[0], mediaBimestres[1], mediaBimestres[2], mediaBimestres[3]);

    // Imprimir resultados
    for (int i = 0; i < 4; ++i) {
        printf("\nMédia Bimestre %d: %.2f\n", i + 1, mediaBimestres[i]);
    }
    printf("\nMédia Final: %.2f\n", mediaFinal);

    return 0;
}
