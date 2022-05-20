#include <stdio.h>
#include <stdlib.h>

int *ponteiro;

int main(){

	ponteiro = (int *) malloc(sizeof(int));
	printf("\n Ponteiro criado e alocado dinamicamente\n\n");
	printf("Endereco :%p Valor :  %d ",ponteiro,*ponteiro);
	printf("\n\n------------------------------------------------\n");
	printf("\nPonteiro com valor preenchido na memoria\n\n");
	*ponteiro = 54;
	printf("Endereco : %p  Valor : %d \n\n\n",ponteiro,*ponteiro);
	system("pause");
	return(0);
}

/*Um ponteiro permite que voc� monitore endere�os na mem�ria, atribua e recupere valores de vari�veis sem ao menos toc�-las. Ao inv�s de obter o valor armazenado numa vari�vel, voc� pode opcionalmente obter o seu endere�o na mem�ria. Um ponteiro aponta para o endere�o de uma vari�vel na mem�ria. 

OLIVEIRA, P. M.; PEREIRA, R. L. Estrutura de Dados I. Maring�-Pr.: Unicesumar, 2019. 

 
Para exercitar ponteiros elabore um programa em linguagem C que contenha as instru��es a seguir: 

a) Defina um ponteiro do tipo inteiro. 

b) Fa�a aloca��o din�mica para o ponteiro rec�m-criado. 

c) Preencha a mem�ria com o valor 54. 

d) Imprima o endere�o do ponteiro na mem�ria e o valor contido nele. */
