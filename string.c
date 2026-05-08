#include <stdio.h>
#include <string.h>

int main() {
    /*char valor = 'c';
    char palavra[5] = {'c', 'a', 's', 'a'};
    printf("%c", valor);*/

    // char nome[10]; // = "Lucas Silva"
    char username[20]; 
    char padrao[20] = "aluno\n";
    printf("Usuario: ");

    // scanf("%s", nome); // Não aceita espaço, considera espaço como finalização
    fgets(username, 20, stdin);
    printf("%d e %d\n", strlen(username), strlen(padrao));

    printf("%d\n", strcmp(username,padrao));
    if(strcmp(username, padrao) == 0){
        printf("Acesso liberado!");
    }else{
        printf("Acesso Negado!");
    }

    return 0;
}