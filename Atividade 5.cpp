#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int num_magico, palpite;
	
	num_magico = rand() % 11;									// 11 números de 0 à 10
	
	printf("Dê o seu palpite sobre o número mágico: ");
	scanf("%d", &palpite);
	
	if(palpite == num_magico)
	{
		printf("Certo! %d é o número mágico",num_magico);
	}
	else if(palpite > num_magico)
	{
		printf("Errado, muito alto");
	}
	else
	{
		printf("Errado, muito baixo");
	}
	
	return(0);
}
