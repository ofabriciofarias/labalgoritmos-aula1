#include <stdio.h>

int main(){

    //DECLARE a, b, c NUMERICO
    int a; //32 bits que equivale 4 bytes
    float b; //32 bits que equivale 4 bytes
    double c; //64 bitss que equivale 8 bytes

    a = 10;

    printf("A = %d\n", a);

    a = 15;

    printf("A = %d\n", a);

    a = a + 1;

    printf("A = %d\n", a);

    a++;

    printf("A = %d\n", a);

    printf("A = %d\n", a++);

    printf("A = %d\n", a);

    printf("A = %d\n", ++a);

    printf("\n\nPonto Flutuante\n");

    b = 12.4;

    printf("B = %f\n", b);
    printf("B = %.2f\n", b);
    printf("B = %.3f\n", b);

    b = b + 1;

    printf("B = %f\n", b);

    printf("\n\nPonto Flutuante de 64 bits\n");

    c = 165.45;

    printf("C = %lf\n", c);
    printf("C = %.1lf\n", c);

    printf("\n\nEntrada do usuario\n");
    printf("Digite o valor de a = ");
    scanf("%d", &a);

    printf("Digite o valor de b = ");
    scanf("%f", &b);

    printf("Digite o valor de c = ");
    scanf("%lf", &c);

    printf("O resultado de a = %d, b = %f, c = %lf\n", a, b, c);

    return 0;
}
