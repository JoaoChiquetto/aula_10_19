#include <stdio.h>
int main()
 {
    char nome[20] = "Joao";
    char genero[10] = "Masculino";
    int idade = 10;
    double altura = 1.75;
    double salario = 1234.56;
   
    
    printf("Ola %s \n", nome);
    printf("Voce é %s \n", genero);
    printf("Voce tem %i anos \n", idade);
    printf("Voce tem %f de altura \n", altura);
    printf("Voce recebe %,.2f de salario \n", salario);
}