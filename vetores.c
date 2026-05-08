#include <stdio.h>

int main() {

    int quantidade;
    float soma = 0;
    float media;

    printf("Quantas notas deseja inserir? ");
    scanf("%d", &quantidade);

    float notas[100];

    for(int i = 0; i < quantidade; i++) {

        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i]; 
    }

    printf("\nNotas cadastradas:\n");

    for(int i = 0; i < quantidade; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    media = soma / quantidade;

    printf("\nSoma das notas: %.2f\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}