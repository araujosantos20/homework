#include <stdio.h>

int print(int i){
    printf("função de impressão %d\n", i);
    return i;
}

int main(void){
    int a = 20;

    if(a != 20 && print(a)){
        printf("Eu não poderei imprimir!\n");
    }

    if(a == 20 && print(a)){
        printf("Eu poderei imprimir!\n");
    }

    return 0;
}