#include <stdio.h>

int main(void){
    int a = 20;
    int b = -5;

    /*Aqui 'b == -5' não é válido, porque 'a != 20' é falso.*/
    if(a != 20 && b == -5){
        printf("Eu não poderei imprimir!\n");
    }

    return 0;
}