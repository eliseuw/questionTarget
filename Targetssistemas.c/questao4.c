/*Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP  R$67.836,43
RJ  R$36.678,66
MG  R$29.229,88
ES  R$27.165,48
Outros  R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.
*/

#include <stdio.h>

int main()
{
    float sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
    float total = sp + rj + mg + es + outros;
    float percentual_sp, percentual_rj, percentual_mg, percentual_es, percentual_outros;

    percentual_sp = (sp / total) * 100;
    percentual_rj = (rj / total) * 100;
    percentual_mg = (mg / total) * 100;
    percentual_es = (es / total) * 100;
    percentual_outros = (outros / total) * 100;

    printf("Percentual de representacao:\n");
    printf("SP: %.2f%%\n", percentual_sp);
    printf("RJ: %.2f%%\n", percentual_rj);
    printf("MG: %.2f%%\n", percentual_mg);
    printf("ES: %.2f%%\n", percentual_es);
    printf("Outros: %.2f%%\n", percentual_outros);

    return 0;
}
