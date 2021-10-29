#include <stdio.h>
#include <string.h>

int main(){
    char titulo[22];
    char titulo2[20];
    char texto[552];

    printf("Digite o titulo do arquivo: ");
    fgets(titulo, 22, stdin);

    printf("Digite o texto (use '*' para quebrar a linha):\n");
    fgets(texto, 552, stdin);

    for(int i = strlen(titulo)-2; i>=0; i--){
        titulo2[i] = titulo[i]; 
    }

    for(int i = 0; i <= strlen(texto); i++){
        if(texto[i] == '*'){
            texto[i] - 1;
            texto[i] = '\n';
        }
    }

    strcat(titulo2, ".txt");
    FILE *file;
    file = fopen(titulo2, "w");

    fprintf(file, "%s\n", texto);
    fclose(file);
    
    return 0;
}