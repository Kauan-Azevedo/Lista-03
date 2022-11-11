#include <stdio.h>

int array[10];
int option;

int main(){
    printf("Gerando valores aleatorios para o array...\n");
    for(int i=0;i<10;i++){
        array[i] = rand() % 101;
        printf("Gerando [%d]° valor: [%i]\n", i, array[i]);
    };
    printf("Valores gerados com sucesso!\n");

};