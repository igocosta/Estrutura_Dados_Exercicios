//FUNÇÕES COM MAIS DE UM PARÂMETRO - EXEMPLO 2

#include <stdio.h>

int soma_dobro (int a, int b)
{
	int soma;
	a=2*a;
	b=2*b;
	soma=a+b;
	return (soma);
}

	main ()
	{
		
		int x,y,res;
		printf("Digite o primeiro numero: \n");
		scanf("%d",&x);
		printf("Digite o segundo numero: \n");
		scanf("%d",&y);
		res = soma_dobro(x,y);
		printf("A soma do dobro dos numeros eh: %d",res);
		return (0);
	}


