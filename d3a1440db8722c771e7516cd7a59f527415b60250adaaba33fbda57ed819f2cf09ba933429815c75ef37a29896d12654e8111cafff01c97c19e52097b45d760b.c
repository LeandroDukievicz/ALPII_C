#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#define TAM 200

struct gestao{
	char data[10],titulo[50],empresa[50],descricao[300], gerente[50];
	int status,codigo,ano;
	float custo;
};

struct gestao projetos[TAM];
int i,busca,acha;
char nome[50];

int cadastro();
int relatorioGeral();
int relatorioFazer();
int relatorioConcluido();
void pesquisa();

int main(){
	setlocale(LC_ALL,"Portuguese");
	int op;
	do{
	system("cls");
	printf("\n\t\t\t\t\t----------------------------------------------");
	printf("\n\t\t\t\t\tDeveloped By Leandro Dukievicz R.A 21144207-5");
	printf("\n\t\t\t\t\t----------------------------------------------");
	printf("\n\t\t\t\t\t   G E S T Ã O     D E     P R O J E T O S :");
	printf("\n\t\t\t\t\t----------------------------------------------\n\n\n");
	printf("\n\tSelecione uma das Opções p/Iniciar:\n");
	printf("\n\t---------------------------------------------------");
	printf("\n\t1- Cadastro de Projetos\n");
	printf("\n\t2- Relatório Geral de Projetos Cadastrados\n");
	printf("\n\t3- Relatório de Projetos c/ Status [1] à Fazer\n");
	printf("\n\t4- Relatório de Projetos c/ Status [2] Fazendo\n");
	printf("\n\t5- Relatório de Projetos c/ Status [3] Concluido\n");
	printf("\n\t6- Pesquisar Projetos por Código\n");
	printf("\n\t7- Encerrar o Sistema > > SAIR > >");
	printf("\n\t---------------------------------------------------\n");
	printf("\n\tInforme a Opção escolhida: ");
	scanf("%d",&op);
	getchar();
	switch(op){
		case 1:
			system("cls");
			cadastro();
			printf("\nVoltando ao Menu, ");
			system("pause");
			break;
		case 2:
			system("cls");
			relatorioGeral();
			printf("\n Voltando ao Menu, ");
			system("pause");
			break;
		case 3:
			system("cls");
			relatorioFazer();
			printf("\nVoltando ao Menu, ");
			system("pause");
			break;
		case 4:
			system("cls");
			relatorioFazendo();
			printf("\n Voltando ao Menu, ");
			system("pause");
			break;
		case 5:
			system("cls");
			relatorioConcluido();
			printf("\n Voltando ao Menu, ");
			system("pause");
			break;
		case 6:
			system("cls");
			pesquisa();
			printf("\nVoltando ao Menu, ");
			system("pause");
			break;	
		case 7:
			printf("\n\n\t\t\t\tOk!!! Encerrando o  Sistema:\n\n\n  ");
			printf("\t\t\t\t\t\t\t\tSaindo >>>>> ");
			system("pause");	
			break;				
		default:
			
			printf("\n\nOpção Inválida!!! Escolha Novamente!!!\n\n\n\n");
			system("pause");
			break;
		}
	}while(op!=7);	
	return(0);
}

int cadastro(){
	char escolha='s';
	while (escolha=='s' && i<=TAM) {
		system("cls");
		printf("\n\t\t\t\t\t-----------------------");
		printf("\n\t\t\t\t\t  Cadastro de Projetos");
		printf("\n\t\t\t\t\t-----------------------\n\n");
		i++;
		projetos[i].codigo=i;
		printf("\nO Código p/este Projeto é:  [ %d",projetos[i].codigo);
		printf(" ]");
		printf("\n--------------------------------------------------\n");
		printf("\nInforme o Título p/ Este Projeto:\n");
		fflush(stdin);
		gets(projetos[i].titulo);
		printf("\nInforme a Empresa Solicitante do Projeto:\n");
		fflush(stdin);
		gets(projetos[i].empresa);
		printf("\nAdicione uma Breve Descrição (Objetivo/Propósitos):\n");
		fflush(stdin);
		gets(projetos[i].descricao);
		printf("\nInforme o Gerente Responsável:\n");
		fflush(stdin);
		scanf("%s", &projetos[i].gerente);
		printf("\nInforme a Estimativa de Custo Geral R$:\n");
		fflush(stdin);
		scanf("%f",&projetos[i].custo);
		printf("\nInforme o Ano de Inicio:\n");
		fflush(stdin);
		scanf("%d",&projetos[i].ano);
		printf("\nInforme a Previsao de Entrega do Projeto: [ dd/mm/aa ]\n");
		fflush(stdin);
		scanf("%s",&projetos[i].data);
		printf("\nInforme Um Status p/ o Projeto:\n ");
		printf("\nStatus [1] à Fazer   [2] Fazendo   [3]Concluído:");
		fflush(stdin);
		scanf("%d",&projetos[i].status);
			while((projetos[i].status<=0)||(projetos[i].status>3)){
				printf("\n\n\nStatus Inválido:\n\n");
				printf("\nInforme Um Status Válido p/ o Projeto:\n ");
				printf("\nStatus [1] à Fazer   [2] Fazendo   [3]Concluído:");
				fflush(stdin);
				scanf("%d",&projetos[i].status);
				}	
		printf("\nOk!!! Projeto Cadastrado!! \tCódigo: [%d",projetos[i].codigo);
		printf("]");
		printf("\n--------------------------------------------------\n");	
		if(i <=TAM){
			printf("\n\nDeseja Continuar Cadastrando? [s] SIM      [n] NAO: ");
			fflush(stdin);
			scanf("%c",&escolha);
		}else{
			system("cls");
			printf("\n\nSua Base de Dados Chegou ao Limite!!! ");
			escolha='n';
		}
	}
	return(0);
}

int relatorioGeral(){	
	printf("\n\t\t\t\t-----------------------------");
	printf("\n\t\t\t\t Relatório Geral de Projetos:");
	printf("\n\t\t\t\t-----------------------------\n\n");
	int	j;
	if(projetos[i].codigo>0){
		for(j= 0;j<= i;j++){
			printf("\nCodigo do Projeto: %d",projetos[j].codigo);
			printf("\n---");
			printf("\nTitulo do Projeto:\n%s",projetos[j].titulo);
			printf("\n---");
			printf("\nEmpresa Solicitante: \n%s",projetos[j].empresa);
			printf("\n---");
			printf("\nDescrição:\n%s",projetos[j].descricao);
			printf("\n---");
			printf("\nGerente Responsável: \n%s",projetos[j].gerente);
			printf("\n---");
			printf("\nCusto Geral do Projeto R$: \n%.2f",projetos[j].custo);
			printf("\n---");
			printf("\nAno de Inicio: %d",projetos[j].ano);
			printf("\n---");
			printf("\nPrevisão de Entrega: %s",projetos[j].data);
			printf("\n---");
			printf("\nLegenda Status: [1] à Fazer  [2]Fazendo  [3]Concluido");
			printf("\nStatus do Projeto: [%d",projetos[j].status);
			printf("]");
			printf("\n--------------------------------------------\n");
			}	
	}else{
		printf("\n\n\n Ainda, Não Há Projetos Cadastrados!!!\n\n\n\n\n");
	}	
	return(0);
}
	
int relatorioFazer(){
	int j;
	for(j= 0;j<= i; j++){
		if(projetos[j].status==1){
			printf("\n\t\t\t\t\t--------------------------------------------");
			printf("\n\t\t\t\t\tRelatório de Projetos c/ Status [1] à Fazer");
			printf("\n\t\t\t\t\t--------------------------------------------");
			printf("\nCodigo do Projeto: %d",projetos[j].codigo);
			printf("\n---");
			printf("\nTitulo do Projeto:\n%s",projetos[j].titulo);
			printf("\n---");
			printf("\nEmpresa Solicitante: \n%s",projetos[j].empresa);
			printf("\n---");
			printf("\nDescrição:\n%s",projetos[j].descricao);
			printf("\n---");
			printf("\nGerente Responsável: \n%s",projetos[j].gerente);
			printf("\n---");
			printf("\nCusto Geral do Projeto R$: \n%.2f",projetos[j].custo);
			printf("\n---");
			printf("\nAno de Inicio: %d",projetos[j].ano);
			printf("\n---");
			printf("\nPrevisão de Entrega: %s",projetos[j].data);
			printf("\n---");
			printf("\nStatus do Projeto: [%d",projetos[j].status);
			printf("]");
			printf("\n--------------------------------------------\n");
		}
			
	}
	return(0);
}

int relatorioFazendo(){	
	int j;
	for(j= 0;j<= i; j++){
		if(projetos[j].status==2){
			printf("\n\t\t\t\t\t--------------------------------------------");
			printf("\n\t\t\t\t\tRelatório de Projetos c/ Status [2] Fazendo");
			printf("\n\t\t\t\t\t--------------------------------------------");
			printf("\nCodigo do Projeto: %d",projetos[j].codigo);
			printf("\n---");
			printf("\nTitulo do Projeto:\n%s",projetos[j].titulo);
			printf("\n---");
			printf("\nEmpresa Solicitante: \n%s",projetos[j].empresa);
			printf("\n---");
			printf("\nDescrição:\n%s",projetos[j].descricao);
			printf("\n---");
			printf("\nGerente Responsável: \n%s",projetos[j].gerente);
			printf("\n---");
			printf("\nCusto Geral do Projeto R$: \n%.2f",projetos[j].custo);
			printf("\n---");
			printf("\nAno de Inicio: %d",projetos[j].ano);
			printf("\n---");
			printf("\nPrevisão de Entrega: %s",projetos[j].data);
			printf("\n---");
			printf("\nStatus do Projeto: [%d",projetos[j].status);
			printf("]");
			printf("\n--------------------------------------------\n");
		}	
	}
	return(0);
}
	
int relatorioConcluido(){		
	int j;
	for(j= 0;j<= i; j++){
		if(projetos[j].status==3){
			printf("\n\t\t\t\t\t---------------------------------------------");
			printf("\n\t\t\t\t\tRelatório de Projetos c/ Status [3] Concluído");
			printf("\n\t\t\t\t\t---------------------------------------------");
			printf("\nCodigo do Projeto: %d",projetos[j].codigo);
			printf("\n---");
			printf("\nTitulo do Projeto:\n%s",projetos[j].titulo);
			printf("\n---");
			printf("\nEmpresa Solicitante: \n%s",projetos[j].empresa);
			printf("\n---");
			printf("\nDescrição:\n%s",projetos[j].descricao);
			printf("\n---");
			printf("\nGerente Responsável: \n%s",projetos[j].gerente);
			printf("\n---");
			printf("\nCusto Geral do Projeto R$: \n%.2f",projetos[j].custo);
			printf("\n---");
			printf("\nAno de Inicio: %d",projetos[j].ano);
			printf("\n---");
			printf("\nPrevisão de Entrega: %s",projetos[j].data);
			printf("\n---");
			printf("\nStatus do Projeto: [%d",projetos[j].status);
			printf("]");
			printf("\n--------------------------------------------\n");
		}
			
	}
	return(0);
}

void pesquisa(){
	printf("\n\t\t\t\t---------------------------------");
	printf("\n\t\t\t\t Pesquisa de Projetos por Código");
	printf("\n\t\t\t\t---------------------------------\n\n\n\n");
	printf("\nInforme o Código do Projeto que deseja Procurar: ");
	fflush(stdin);
	scanf("%d",&busca);
	i=0;
	acha=0;
	while ((i<= TAM) && (acha==0)){
		if (projetos[i].codigo==busca)
		acha=1;
		else i++;
	}
	if (acha==1){
	printf("\n-------------------------------------------\n");
	printf("\nCódigo do Projeto: %d  ",projetos[i].codigo);
	printf("\n---");
	printf("\nTitulo:\n%s",projetos[i].titulo);
	printf("\nEmpresa Solicitante: \n%s",projetos[i].empresa);
	printf("\n---");
	printf("\nDescrição:\n%s" ,projetos[i].descricao);
	printf("\n---");
	printf("\nGerente Responsável do Projeto:\n%s",projetos[i].gerente);
	printf("\n---");
	printf("\nCusto Geral do Projeto: %.2f",projetos[i].custo);
	printf("\n---");
	printf("\nAno de Inicio:%d",projetos[i].ano);
	printf("\n---");
	printf("\nPrevisão de Entrega:%s",projetos[i].data);
	printf("\n---");
	printf("\nStatus do projeto: [%d",projetos[i].status);
	printf("]");
	printf("\n-------------------------------------------\n");	
	}else{
		printf("\n\n\nNao foi localizado Projeto com este Código:  %d",busca);
		printf("\n\n\n");
		}	
}


