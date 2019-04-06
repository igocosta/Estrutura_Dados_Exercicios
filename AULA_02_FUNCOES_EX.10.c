//FUNÇÃO RECURSIVA PARA FATORIAIS - EXEMPLO 1

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


long fatorial (long numero){
	if(numero <=1)
	return 1;
	else
	return numero*fatorial (numero -1);
}

	main(){
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	printf("%2d!=%1d\n",i,fatorial(i));

	return 0;
}



