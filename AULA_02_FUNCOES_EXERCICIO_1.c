//Escrever uma função para fazer um programa que transforme segundos em horas, minutos e segundos.

#include <stdio.h>

void segundos(int seg);

main(){
	int seg;
	printf("Informe o tempo em segundos: ");
	scanf("%d", &seg);
	segundos(seg);
}

void    segundos(int seg){
	int h, m, s, x;
	h = seg/3600;
	x = seg%3600;
	//printf("%d", aux);
	m = x/60;
	s = x%60;
	printf("%dh\t%dm\t%ds", h, m, s);
}


