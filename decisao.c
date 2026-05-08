#include<stdio.h>

int main () {

    float nota_1, nota_2;
    int presenca;
    
    /*especificadores utilizados:
        %f <-- ponto flutuante(float)
        %lf <-- ponto flutuante longo (double)
        %d ou %i <-- inteiro (int)
        %c <-- caracteres (char)
        %s <-- string (str)
    */

    printf("Calculadora de media do aluno\n");
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota_2);
    printf("Digite a frequencia do aluno: ");
    scanf("%d", &presenca);

    float media = (nota_1 + nota_2)/2;
    printf("A media final do aluno e de: %.2f, a frequencia do aluno é de: %d.\n O aluno esta de: ", media, presenca);
   
    if(media >= 6 && presenca >= 75){
        printf("Aprovado! ");
        }else if (media >=4 && presenca >= 75){
            printf("Recuperacao! ");
        }else if (media >=6 && presenca < 75){
            printf("Reprovado por falta! ");
        }else{
            printf("Reprovado! ");
        
    }

    return 0;
} 

