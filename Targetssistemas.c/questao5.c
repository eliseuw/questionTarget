//Escreva um programa que inverta os caracteres de um string.



#include <stdio.h>
#include <string.h>

int main()
{
    char correto[100], invertido[100];
    int i, tam;

    printf("Digite uma string: ");
    fgets(correto, 100, stdin);

    tam = strlen(original);

    if (correto[tam - 1] == '\n') {
        correto[tam - 1] = '\0';
        tam--;
    }

    for (i = tam - 1; i >= 0; i--) {
        invertido[tam - 1 - i] = correto[i];
    }

    invertido[tam] = '\0';

    printf("String correto: %s\n", correto);
    printf("String invertida: %s\n", invertido);

    return 0;
}
