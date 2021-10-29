#include <stdio.h>
#include <string.h>

int main(){
    char nomeArquivo[32];
    char c;

    printf("Digite o nome do arquivo que deseja: ");
    gets(nomeArquivo);

    FILE *file;
    file = fopen(nomeArquivo, "r");

    while (fscanf(file, "%c", &c) != EOF){
        printf("%c", c);
    }
    fclose(file);

    printf("\n");
    return 0;
}