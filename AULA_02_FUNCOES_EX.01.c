//UTILIZAÇÃO DE PARÂMETROS - EXEMPLO 1//

#include <stdio.h>

int fatorial (int n)
{
	int i, fat;
	fat=1;
	for(i=1;i<=n;i++)
	
		fat*=i;/*fat=fat*i;*/
		printf("\nFatorial de  %d = %d\n",n,fat);
		return (fat);
}

void main (){
	int x, result;
	printf("Digite um número para o fatorial: \n");
	scanf("%d", &x);
	result = fatorial (x);
	printf ("fatorial é %d %d", x, result);
}

