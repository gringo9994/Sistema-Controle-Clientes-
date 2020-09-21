#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


typedef struct NO{
	int dado;

	int cpf;

struct NO* prox;
	
	
}NO;


 typedef struct LISTA{
 	NO* ini;
 	NO* fim;
 	
 	
 }LISTA;
 LISTA lista;
 
 void insereInicio(int elemento, int c){
 	//alocando memoria para NO
 	NO *ptr=(NO*)malloc(sizeof(NO));
 	//inicializar o NO
 	ptr->dado=elemento;
 	ptr->cpf=c;
 	ptr->prox=NULL;
 	//verificar se a lista esta vazia 
 	if(lista.ini==NULL){
 		lista.fim=ptr;
 
 	
 		//caso exista algum elemento na lista
	 }else{
	 	
	 	ptr->prox=lista.ini;
	 
	 	
	 }
	 // atribui ao ponteiro  lista.ini para receber um novo elemento
	 	lista.ini=ptr;
 }


 void inserirFim(int elemento,int c){
 		NO *ptr=(NO*)malloc(sizeof(NO));
 		ptr->dado=elemento;
 		ptr->cpf=c;
 	    	ptr->prox=NULL;
 	    	if(lista.ini==NULL){
 	    		lista.ini=ptr;
 	    		
			 }else{
			 	lista.fim->prox=ptr;
			 	
			 }
			 
			 //incruindo um novo elemento no fim da lista
			 lista.fim=ptr;
 }

void imprimir(){
	//inicilizar a lista 
	NO*ptr=lista.ini;

	printf("---INICIO----\n");
	while(ptr!=NULL){
		//enquanto ptr for diferente null ,imprime um novo elemento
		printf(" ID e :%d\n CPF e : %d\n" ,ptr->dado,ptr->cpf);
		
		ptr=ptr->prox;
	}
	
	
	
}


 int removeInicio(){
	
	NO* ptr=lista.ini;
	int elemento;
	if(ptr==NULL){
		printf("Lista esta Vazia");
		return -1;
		
}else{
	
	lista.ini=lista.ini->prox;
	ptr->prox=NULL;
	elemento=ptr->dado;
	elemento=ptr->cpf;
	free(ptr);
}
}

int main(){

	//inicializando a lista
		int dado;
	 
	    int cpf;
	
	lista.ini=NULL;
    int op;
    
    do{
    	printf("\t\t 0 -sair\t\t\n");
    	printf("\t\t 1 -para inserir no Inicio  da Lista\t\t \n");
    	printf("\t\t 2 -para inserir no Fim da Lista  \n");
    	printf("\t\t 3 -para Excluir do Inicio  da Lista\t\t\  \n");	
    	printf("\t\t 4 -para imprimir \t\t\n");
    	scanf("%d",&op);
    	switch(op){
    		
    		case 0:
    			break;
    		case 1 : 
    		printf("Digite Um Id \n");
    		scanf("%d",&dado);
    		printf("Digite Um CPF \n");
    		scanf("%d",&cpf);
    		system("cls");
    		insereInicio(dado,cpf);
    
    	 
    		break;
    		case 2 :
    				printf("Digite Um valor\n");
    		scanf("%d",&dado);
    		
    			printf("Digite Um CPF\n");
    		scanf("%d",&cpf);
    				system("cls");
    		inserirFim(dado,cpf);
    	
    
    		
    		break;
    		
    		
    		
    			case 3 :
    			dado=removeInicio();
    			cpf=removeInicio();
    		   if(dado== -1 &&cpf== -1){
    		   	printf("Erro");
    		   	system("pause");
			   }else{
			   	
			   	printf("Removendo o elemento Dado  %d\n Removendo O CPF %d\n",dado,cpf);
			   }
    			system("cls");
    		    
    		break;
    		
    			case 4 :
    			printf("Imprimindo os valores do Inicio da Lista\n");
    				system("cls");
    		   imprimir();
    		    
    		break;
    		
    		default: 
    		printf("Opcao invalida\n");
    	
    		break;
		}
    	
	}while(op!=0);




	return 0;
	
system("pause");
}



	






