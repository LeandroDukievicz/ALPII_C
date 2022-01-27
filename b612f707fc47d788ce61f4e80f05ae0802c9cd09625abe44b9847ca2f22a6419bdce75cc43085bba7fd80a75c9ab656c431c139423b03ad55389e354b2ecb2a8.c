#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	char nome[30];
	float salario;
		
	setlocale(LC_ALL,"portuguese");
	printf("\t\t\t\t\t-------------------------------------\n");
	printf("\t\t\t\t\t|    Empresa Dookie Technologies    |\n");
	printf("\t\t\t\t\t|    R.A :21144207-5                |\n  ");
	printf("\t\t\t\t\t|    NOME : Leandro Dukiévicz       |\n");
	printf("\t\t\t\t\t-------------------------------------\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Seja Bem-Vindo! Antes de iniciarmos, Informe seu nome:\n ");
	scanf("%s",nome);
	printf("\nOlá Colaborador(a):%s",&nome);
	printf("\n");
	printf("\nPara Simular sua atualização Salarial,");
	printf("Informe seu Último Salário Líquido:");
	scanf("%f",&salario);
		
		if (salario<=1750.00){
			salario= (salario*1.075)+150;
			printf("\nSua Nova Estimativa Salárial é R$ %.2f",salario);
	}
		else 
			if	(salario>1750.00){
			  	salario=salario*1.075;
			  	printf("Salário reajustado para R$ %.2f",salario);
				}			
		return (0);	
}
