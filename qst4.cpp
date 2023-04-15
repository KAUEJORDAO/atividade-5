#include <stdio.h>

#define MAIORIDADE(idade) (idade >= 18 ? 1 : 0)
#define MENORIDADE(idade) (idade < 18 ? 1 : 0)


int main (){
	char nome[50];
	int idade;
	printf("Informe o nome:");
	scanf("%s", &nome);
		
	printf("Informe a idade:");
	scanf("%d", &idade);
	
  if (MAIORIDADE(idade)) {
        printf("%s eh maior de idade.", nome);
    } else if (MENORIDADE(idade)) {
        printf("%s eh menor de idade.", nome);
    }
	
	return 0;
}
