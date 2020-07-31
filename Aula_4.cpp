#include <stdio.h>
#include <locale.h>

//Curso de Linguagem C Aula 4  e exer  
main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	// %c  ou %s 
	
	// letra    c
	// palavra  casa
	
	/*
	//1° char com um caractere
	char nome = "casa";
	printf("%c",nome);
	*/
	
	/*
	//2°cadeia de caractere
	char nome[8] = "string";
	printf("%s",nome);
	*/
	
	
	/*
	//3° penas uma palava usando o Scanf
	char nome[100] ;
	printf("Digite um nome:");
	scanf("%s",&nome);
	printf("O nome digitado é : %s",nome);
	*/
	
	//4° 
	
	char nome[100] ;
	printf("Digite o seu nome completo :");
	gets(nome);
	printf("%s",nome);
	
	
	
	
}


