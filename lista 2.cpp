#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct no No;
 struct no{
	char nome;
	int num;
	int cpf;
	struct no *prox;

};
//função para criar um nó

No* criarNo(){
	//cria um nó
	No *novo=(No*)malloc(sizeof(No));
	return novo;
	
}

//função para inserir 
No *inserirInicio(No* lista,char n,int  elemento,int c){
	No *novo_no=criarNo();   // cria um novo NÒ sem elemento 
	 // novo aponta para num ,que recebe um dado
	 novo_no->nome=n;
	novo_no->num=elemento;
	novo_no->cpf=c;

	
	//testar se a lista estiver vazia ;
	
	if(lista==NULL){
		lista=novo_no;
		novo_no->prox=NULL;
			
		
	}
	
	// caso a lista esteja com elemento
	else{
		novo_no->prox=lista;
		lista=novo_no;
		
}
	
	return lista;

}


void imprimirLista(No *lista){
	//criando um ponteiro auxiliar a apontar para o mesmo lugar que a lista esta apontando para imprimir os valores
No *aux=lista;

	while(aux!=NULL){
		printf(" O NOME e %c\n O ID e %d\n   CPF e : %d\n",aux->nome,aux->num,aux->cpf);
		//vai incrementando para um intem na lista
		aux=aux->prox;
		
		
	}
}



int main(){
	//iniciando lista vazia
	
	    No *lista=NULL;
	    //lista recebe como a função inserir a lista e com parametro um inteiro
	    lista=inserirInicio(lista,'s',12,999999);
	
	
	//chamando a função de imprimir a lista
	imprimirLista(lista);
	
	return 0;
	
}











