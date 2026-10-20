#include<stdio.h>
#include<math.h>

int main(){
// se usar int iremos ter problemas casting
    float numero1 = 9.0f; // letra f indica que é um float

//tipo doble com float
    double raiz = sqrt(numero1);

    printf("A raiz quadrada de %f é %.2f \n", numero1, raiz);


    float x = 10.0f;
    float y = 2.0f;
    float resultado = pow(x, y); // x elevado a y

    printf("O resultado de %.2f elevado a %.2f é %.2f \n", x, y, resultado);

    return 0;
}