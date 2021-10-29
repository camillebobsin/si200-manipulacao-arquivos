#include <stdio.h>
#include <string.h>

int main(){
    char c;
    int num = 0;

    FILE *file;
    file = fopen("arquivo_linhas.txt", "r");

    c = getc(file);
    while (c != EOF){
        if(c == '\n'){
            num++;   
        }
        c = getc(file);
    } 
    fclose(file);

    printf("O numero de linhas e: %d\n", num+1);
    return 0;
}