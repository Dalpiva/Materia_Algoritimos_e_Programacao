#include <stdio.h>
#include <locale.h>
#include <math.h>


//----------------------------------------------------------------------//
//						Fun��o para calcular o troco					//
//----------------------------------------------------------------------//
int calculadora_de_troco(int valor_da_compra){
	
	//----- Declara��o de vari�veis
	int notas_de_100 = 0, notas_de_50 = 0, notas_de_20 = 0, notas_de_10 = 0, notas_de_5 = 0, notas_de_2 = 0, moedas = 0;

	printf("%d reais equivale a:\n", valor_da_compra);
	
	//----- C�lculo das Notas de 100
	if(valor_da_compra >= 100)
	{
		for(int indice = valor_da_compra; indice >= 100; indice -= 100)
		{
			notas_de_100++;
			valor_da_compra -= 100;
		}
	}
	printf("%d nota(s) de 100\n", notas_de_100);
	
	//----- C�lculo das Notas de 50
	if(valor_da_compra >= 50)
	{
		for(int indice = valor_da_compra; indice >= 50; indice -= 50)
		{
			notas_de_50++;
			valor_da_compra -= 50;
		}
	}	
	printf("%d nota(s) de 50\n", notas_de_50);
	
	//----- C�lculo das Notas de 20
	if(valor_da_compra >= 20)
	{
		for(int indice = valor_da_compra; indice >= 20; indice -= 20)
		{
			notas_de_20++;
			valor_da_compra -= 20;
		}
	}	
	printf("%d nota(s) de 20\n", notas_de_20);
	
	//----- C�lculo das Notas de 10
	if(valor_da_compra >= 10)
	{
		for(int indice = valor_da_compra; indice >= 10; indice -= 10)
		{
			notas_de_10++;
			valor_da_compra -= 10;
		}
	}	
	printf("%d nota(s) de 10\n", notas_de_10);
	
	//----- C�lculo das Notas de 5
	if(valor_da_compra >= 5)
	{
		for(int indice = valor_da_compra; indice >= 5; indice -= 5)
		{
			notas_de_5++;
			valor_da_compra -= 5;
		}
	}	
	printf("%d nota(s) de 5\n", notas_de_5);
	
	//----- C�lculo das Notas de 2
	if(valor_da_compra >= 2)
	{
		for(int indice = valor_da_compra; indice >= 2; indice -= 2)
		{
			notas_de_2++;
			valor_da_compra -= 2;
		}
	}	
	printf("%d nota(s) de 2\n", notas_de_2);
	
	//----- C�lculo das Moedas de 1
	if(valor_da_compra >= 1)
	{
		for(int indice = valor_da_compra; indice >= 1; indice -= 1)
		{
			moedas++;
			valor_da_compra -= 1;
		}
	}	
	printf("%d nota(s) de 1\n", moedas);		
}

//----------------------------------------------------------------------//
//							Fun��o Principal							//
//----------------------------------------------------------------------//
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	//----- Declara��o das vari�veis
	int valor_total, quantidade, quantidade_total;
	float valor_total_f, valor_unitario, media;
	char repetir;
	
	//----- Recebe os valores e quantidades
	do{
		do{
			printf("\nInforme a quantidade de um produto: ");
			scanf(" %d", &quantidade);
			
			if(quantidade > 0)
			{
				printf("Informe o valor unit�rio do produto: ");
				scanf(" %f", &valor_unitario);
				
				valor_unitario = quantidade*valor_unitario;
				
				quantidade_total = quantidade_total + quantidade;
				valor_total_f = valor_total_f + valor_unitario;
			}
		}while(quantidade >= 0);
		
		//----- Dados unit�rios
		media = valor_total_f/quantidade_total;
		
		printf("VALOR TOTAL DA COMPRA: R$ %.2f\n", valor_total_f);
		printf("VALOR MEDIO DA COMPRA: R$ %.2f\n", media);
		
		//----- Convers�o + c�lculos
		valor_total = floor(valor_total_f);
		valor_total_f = valor_total_f - valor_total;
		
		printf("O valor total da compra � %d reais e %.2f centavos\n", valor_total, valor_total_f);
		
		//----- Calculadora das notas
		calculadora_de_troco(valor_total);
		
		//----- Repeti��o do programa
		printf("Deseja repetir o programa? <S ou N>:");
		scanf(" %c", &repetir);
		
		valor_total = 0; quantidade = 0; quantidade_total = 0; valor_total_f = 0; valor_unitario = 0; media = 0;	
		
	}while(repetir != 'N');
	
	return 0;
}
