/*Estrutura de Condição - SE - SENÃO*/

#include <stdio.h>


void main (){

	int idade;
	printf ("idade: \n");
	scanf ("%d", &idade);
	
	if (idade>=18){
		printf ("adulto \n");
	}
	
	else
		printf ("Menor");
		
	system ("pause");
}
