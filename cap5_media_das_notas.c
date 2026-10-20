//criar um codigo que calcule a media das duas notas do aluno
//codigo deve perguntar o nome, as duas notas
// e exibir no terminal a média simples
#include <stdio.h>

int main() {
    //char nome[50]; //variavel do tipo char que armazena uma string de até 50 caracteres
    //float nota1, nota2, media; //variaveis do tipo float que armazenam números decimais
    char nome[50];
    float nota1, nota2, media;
//%s serve para exibir uma string, %f para exibir um float e %.2f para exibir um float com duas casas decimais
// um float é um tipo de dado que representa um número decimal, ou seja, um número com casas decimais
//scanf é uma função que permite ler dados do terminal, ou seja, permite que o usuário digite informações no terminal
    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
// ou seja, a média é calculada somando as duas notas e dividindo o resultado por 2
    printf("Olá, %s! Sua média é: %.2f\n", nome, media);
    
    return 0;
}