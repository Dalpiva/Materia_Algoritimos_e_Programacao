#include <stdio.h>
#include <stdlib.h>					

int main(){
	
	char categoria = '#';
	float media, quantidade = 0, soma, total = 0; 				// Vari�veis Alteradas para garantir o resultado em float

	do
	{
		printf("Informe a Categoria: ");
		scanf(" %c", &categoria);							// O espa�o no inicio garante que nenhum lixo entre na variavel.

		while(quantidade < 1)								// Garantia que quantidade ser� maior que 0
		{
			printf("Informe a Quantidade: ");
			scanf("%f", &quantidade);
		}
				
		soma = soma + quantidade;
		total++;
		media = soma/total;									// Variavel total alterada (para realizar a m�dia)	
		
		quantidade = 0;										// Complemento da garantia que quantidade ser� maior que 0
		
	}while(categoria == 'A' || categoria == 'B' || categoria == 'C');

	printf("a media dos produtos eh %.2f",media);
	
	return(0);
	
}
