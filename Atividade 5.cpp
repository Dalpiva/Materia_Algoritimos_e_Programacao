#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int num_magico, palpite;
	
	num_magico = rand() % 11;									// 11 n�meros de 0 � 10
	
	printf("D� o seu palpite sobre o n�mero m�gico: ");
	scanf("%d", &palpite);
	
	if(palpite == num_magico)
	{
		printf("Certo! %d � o n�mero m�gico",num_magico);
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
