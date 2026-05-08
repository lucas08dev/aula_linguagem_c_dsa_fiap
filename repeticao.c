#include<stdio.h>
int main () {

    /*Estrutura (LOOP) FOR*/

    int n = 1;
    int numero = 6;
    // for (int i = 0; i <11; i+=n){
    //   int tabuada =  (i * numero);
    //   printf("%d x %d = %d\n", numero, i , tabuada);
    // }

    int i;
    while (i < 11){
        int tabuada = i * numero;
        printf("%d x %d = %d\n", numero, i, tabuada);
        i++;
        }
    return 0;
}