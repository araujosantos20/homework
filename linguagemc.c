#include<stdio.h>

int main(){
    FILE *par, *impar;
    int n = 10;
    size_t k = 0;

    par = fopen("par.txt", "w");
    impar = fopen("impar.txt", "w");

    for(k = 1; k < n + 1; k++){
            k % 2 == 0 ? fprintf(par, "\t%5d\n", k)
                       : fprintf(impar, "\t%5d\n", k); 
    }
    fclose(par);
    fclose(impar);

    return 0;
}