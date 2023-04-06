//Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.


#include <stdio.h>

int main() {
    int num, fibo1 = 0, fibo2 = 1, temp;

    printf("Digite um número: ");
    scanf("%d", &num);

    while (fibo2 <= num) {
        if (fibo2 == num) {
            printf("%d pertence à sequência de Fibonacci.\n", num);
            return 0;
        }
        temp = fibo2;
        fibo2 += fibo1;
        fibo1 = temp;
    }

    printf("%d não pertence à sequência.\n", num);
    return 0;
}
