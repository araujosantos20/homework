#include <stdio.h>

int main(){
    char sentence []="data : 06-06-2012";
    char str [50];
    int ano;
    int mes;
    int dia;
    scanf(sentence, "%s : %2d-%2d-%4d", str, &dia, &mes, &ano);
    printf("%s -> %02d-%02d-%4d\n", str, dia, mes, ano);
    return 0;
}