#include <stdio.h>

#define SOMA(x,y,z,w) (x+y+z+w)
#define MEDIA(soma) (soma/4.0)

int main() {
    int num1, num2, num3, num4;
    float media;

    printf("Digite quatro numeros inteiros: \n\n");
    printf("Primeiro numero:");
    scanf("%d", &num1);
    
    printf("Segundo numero:");
     scanf("%d", &num2);
    
    printf("Terceiro numero:");
    scanf("%d", &num3);
    
    printf("Quarto numero:");
      scanf("%d", &num4);
   
    
  

    media = MEDIA(SOMA(num1, num2, num3, num4));

    printf("A media dos numeros digitados eh: %.2f", media);

    return 0;
}

