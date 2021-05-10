#include <stdio.h>

int main(){ //ALGORITMO

    //DECLARE a, b, c, produto NUMERICO
    int a = 2, b, c, produto;

    printf("a = %d\n", a);

    //ESCREVA "Digite o valor de a ="
    printf("Digite o valor de a = ");
    //LEIA a
    scanf("%d", &a);

    printf("a = %d\n", a);

    //ESCREVA "Digite o valor de b ="
    printf("Digite o valor de b = ");
    //LEIA b
    scanf("%d", &b);

    printf("Digite o valor de c = ");
    scanf("%d", &c);

    //produto <- a * b * c
    produto = a * b * c;

    printf("O resultado do produto = %d\n", produto);

    return 0;
}//FIM_ALGORITMO
