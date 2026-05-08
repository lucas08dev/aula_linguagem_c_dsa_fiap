#include<stdio.h>

int main() {
    int opcao, presenca;
    float nota_1, nota_2, media;

    printf("--- MENU ---\n");
    printf("1 - Calculadora de media;\n");
    printf("2 - Verificador de presenca.\n");
    printf("Selecione uma das opcoes acima: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1: 
            printf("--- Calculadora de media ---\n");
            printf("Digite a sua primeira nota: ");
            scanf("%f", &nota_1);
            printf("Digite a sua segunda nota: ");
            scanf("%f", &nota_2);
            if(nota_1 < 11 && nota_1 >= 0 && nota_2 < 11 && nota_2 >= 0){
                media = (nota_1 + nota_2)/2;
                printf("A media do aluno e: %.2f. O calculo da media e: (%.2f + %.2f)/2", media, nota_1, nota_2);
            } else {
                printf("Notas fora do limite!");
            }  
            break; 

        case 2: 
            printf("--- Verificador de presenca ---\n");
            printf("Digite a frequencia de presenca (0 a 100): ");
            scanf("%d", &presenca);
            if(presenca >= 75 && presenca <= 100){
                printf("Aluno sem pendencia na presenca!\n");
                printf("A frequencia do aluno e: %d%%", presenca);
            } else if(presenca >= 0 && presenca < 75){
                printf("O aluno esta com pendencia na presenca\n");
                printf("A frequencia do aluno e: %d%%", presenca);
            } else {
                printf("O valor da frequencia e invalido!\n");
            }
            break;

        default:
            printf("Opcao invalida!");
    }
    return 0;
}