#include <stdio.h>

int main (void)
{
	float resto;
	int num1, num2;
	
	printf("Informe o primeiro valor: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo valor: ");
	scanf("%d", &num2);
	
	if(num1 == 0 || num2 == 0)
	{
		printf("N�o � possivel realizar divis�o por zero\n");
	} 
	else if(num1 > num2)
	{
		resto = num1 % num2;
	}
	else
	{
		resto = num2 % num1;	
	}
	
	printf("O resto da divis�o � %f\n", resto);
}
