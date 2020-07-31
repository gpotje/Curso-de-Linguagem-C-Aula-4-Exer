#include <stdio.h>
#include <locale.h>

main(){
	
	
	int v1,v2;

	setlocale(LC_ALL,"Portuguese");
	
	printf("digite o valor 1 : ");
	scanf("%i",&v1);
	
	printf("digite o valor 2 : ");
	scanf("%i",&v2);
	
	
	printf("o resultado da soma entre %i + %i = %i \n ",v1,v2,v1+v2);
	printf("o resultado da subtração entre %i - %i = %i \n",v1,v2,v1 - v2);
	printf("o resultado da Divisão entre %i / %i = %i \n",v1,v2, v1/v2);
	printf("o resultado da multiplição entre %i * %i = %i \n",v1,v2,v1*v2);


	
}
