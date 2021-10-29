#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("arquivo_base.txt", "r");
    int num = 0;
    char caractere;

    caractere = getc(file);
    while (caractere != EOF){
        if(caractere != ' '){
            num++;   
        }
        caractere = getc(file);
    } 
    fclose(file);

    file = fopen("arquivo_base.txt", "a");
    fprintf(file, "\n%d", num);
    fclose(file);

    printf("O numero de carcateres no arquivo e: %d\n", num);
}