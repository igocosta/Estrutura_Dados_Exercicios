//UTILIZA��O DE PAR�METROS - EXEMPLO 1//

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
	printf("Digite um n�mero para o fatorial: \n");
	scanf("%d", &x);
	result = fatorial (x);
	printf ("fatorial � %d %d", x, result);
}

