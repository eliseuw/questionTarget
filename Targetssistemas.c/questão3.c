//Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:
//• O menor valor de faturamento ocorrido em um dia do mês;
//• O maior valor de faturamento ocorrido em um dia do mês;
//• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.


#include <stdio.h>

#define TAMANHO_VETOR 31 
int main() {
    float faturamento_diario[TAMANHO_VETOR];
    float soma_faturamento = 0, media_faturamento;
    float menor_faturamento = 0, maior_faturamento = 0;
    int dias_acima_media = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("Digite o faturamento do dia %d: ", i+1);
        scanf("%f", &faturamento_diario[i]);
        soma_faturamento += faturamento_diario[i];
    }

    media_faturamento = soma_faturamento / TAMANHO_VETOR;

    menor_faturamento = faturamento_diario[0];
    maior_faturamento = faturamento_diario[0];
    for (int i = 1; i < TAMANHO_VETOR; i++) {
        if (faturamento_diario[i] < menor_faturamento) {
            menor_faturamento = faturamento_diario[i];
        }
        if (faturamento_diario[i] > maior_faturamento) {
            maior_faturamento = faturamento_diario[i];
        }
    }

    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (faturamento_diario[i] > media_faturamento) {
            dias_acima_media++;
        }
    }
    printf("Menor faturamento diario: %.2f\n", menor_faturamento);
    printf("Maior faturamento diario: %.2f\n", maior_faturamento);
    printf("Dias com faturamento acima da media mensal (%.2f): %d\n", media_faturamento, dias_acima_media);

    return 0;
}
