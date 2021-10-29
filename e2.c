#include <stdio.h>

int main(){
    int num = 0;
    char caractere;

    FILE *file;
    file = fopen("arquivo_base.txt", "r");

    caractere = getc(file);
    while (caractere != EOF){
        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U' ){
            num++;   
        }
        caractere = getc(file);
    } 
    fclose(file);

    printf("O numero de vogais no texto e: %d\n", num);
}