#include <stdio.h>

main (){


	int num;
	
	printf ("Digite um numero:\n", num);
	scanf ("%d", &num);


while (num==0){

	printf ("VOCE PRECISA SELECIONAR UMA DAS OPCOES\n");
	printf ("Digite um numero:\n");
	scanf  ("%d", &num);
	printf ("%d", num);
}

	if (num > 0)
	printf ("VERDADEIRO - O numero digitado e positivo\n");

	else if (num < 0)
	printf ("FALSO - O numero digitado e negativo\n");



}


