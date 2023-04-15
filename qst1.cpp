#include <stdio.h>
#include <stdlib.h>



#define SOMAR(a, b) (a + b)
#define SUBTRAIR(a, b) (a - b)
#define DIVIDIR(a, b) (a / b)
#define MULTIPLICAR(a, b) (a * b)

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: \n\n");
    printf("Digite o primeiro numero:");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Soma: %d\n", SOMAR(num1, num2));
    printf("Subtracao: %d\n", SUBTRAIR(num1, num2));
    printf("Divisao: %d\n", DIVIDIR(num1, num2));
    printf("Multiplicacao: %d\n", MULTIPLICAR(num1, num2));
    
    return 0;
}







