//PASSAGEM DE PARÂMETRO POR REFERÊNCIA - EXEMPLO 2

#include <stdio.h>
#include <conio.h>

int troca (int *a, int *b)
//Definição de ponteiros que receberão os valores
{
	int x; // Variável auxiliar
	x = *a;
	if (*a>*b)
	{
	
	*a=*b;
	*b=x;
	return (0);
	}
}

main()
{
int vetor[9],i,j;
char tecla;
printf("\n\n Ordenacao de vetor \n\n");

/*Entrada de dados*/
	for (i=0;i<=9;i++)
	{
	
	printf("\nEntro com o %do. elemento: \n ", i+1);
	scanf("%d",&vetor[i]);

}
/*Ordenação do vetor*/

for (i=0;i<=9;i++)
	for (j=i+1;j<=9;j++)
		troca (&vetor[i],&vetor[j]);

/*Apresentação do vetor ordenado*/	


	for (i=0;i<=9;i++)
	printf("\n%do. elemento: %d\n",i+1,vetor[i]);
	
	system("pause");
	return 0;
	
}
	
