#include <stdio.h>

int main()
{


    char nome[50];
    //mensagem para o terminal
    printf("Digite seu nome: ");
    //entrada de daos no terminal
    scanf("%s", nome);
    //mensagem para o terminal
    printf("Olá, %s! Prazer em conhecê-lo.\n", nome);
    return 0;
}