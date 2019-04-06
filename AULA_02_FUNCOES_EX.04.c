//FUNÇÕES COM MAIS DE UM PARÂMETRO - ENTRADA

#include <stdio.h>

int mult (float a, float b,float c){
	printf("%f",a*b*c);
	return 0;
}

main (){
	float x,y;
	x=23.5;
	y=19.2;
	mult (x,y,3.87);
	
	return 0;
}
