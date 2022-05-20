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

/*Um ponteiro permite que você monitore endereços na memória, atribua e recupere valores de variáveis sem ao menos tocá-las. Ao invés de obter o valor armazenado numa variável, você pode opcionalmente obter o seu endereço na memória. Um ponteiro aponta para o endereço de uma variável na memória. 

OLIVEIRA, P. M.; PEREIRA, R. L. Estrutura de Dados I. Maringá-Pr.: Unicesumar, 2019. 

 
Para exercitar ponteiros elabore um programa em linguagem C que contenha as instruções a seguir: 

a) Defina um ponteiro do tipo inteiro. 

b) Faça alocação dinâmica para o ponteiro recém-criado. 

c) Preencha a memória com o valor 54. 

d) Imprima o endereço do ponteiro na memória e o valor contido nele. */
