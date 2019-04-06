#include <stdio.h>
#include <stdlib.h>

/*ESCOLHA-CASO*/

int main (){
	float p, h, IMC;
	
	printf ("Digite seu peso: \n");
	scanf ("%f", &p);
	
	printf ("Digite sua altura \n");
	scanf ("%f", &h);
	
	IMC = p/(h*h);
	
	if (IMC <=18.5){
		printf ("Abaixo do Peso \n", IMC);
	}
	
	else if (IMC >=18.6 && IMC<=24.9) {
		printf ("Saudável \n", IMC);
	}
	
	else if (IMC >=25 && IMC <=29.9) {
		printf ("Peso em excesso \n", IMC);
	}
		
	else if (IMC >=30 && IMC <=34.9) {
		printf ("Obesidade Grau I \n", IMC);
	}
		
	else if (IMC >=35 && IMC <=39.9) {
		printf ("Obesidade Grau II \n", IMC);
	}
	
	else if (IMC >=40) {
		printf ("Obesidade Grau III \n", IMC);
	}		
		
	system ("pause");
	
	
		
/*	switch ( IMC ) 
	{
		case (IMC<=18,5):
		printf("teste \n");
		break; 


	} 
	*/
}
	
