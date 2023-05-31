#include "cabecalho.h"
#include<stdio.h>
#include<stdlib.h>
 
Filme* criar_filme(){
    
    Filme* actual = (Filme*)malloc(sizeof(Filme));  // Allocate memory for Filme structure
    actual->informacoes = (Info*)malloc(sizeof(Info));  // Allocate memory for Info structure

    printf("Nome do filme: ");
    scanf(" %s", actual->nome);
    printf("Preco do filme: ");
    scanf("%f", &actual->preco);
    printf("Nome do diretor: ");
    scanf(" %s", actual->informacoes->diretor);
    printf("Ano do filme: ");
    scanf("%d", &actual->informacoes->ano);
    printf("Genero do filme: ");
    scanf(" %s", actual->informacoes->genero);
    printf("Faixa etaria do filme: ");
    scanf("%d", &actual->informacoes->faixaEtaria);
    printf("\n");

    return actual;
}

//function that deletes the movie and also free memory
void free_filme(Filme* f){
    free(f->informacoes);
    free(f);
}

//função que imprime informações de um filme
void imprimir_filme(Filme* f){
    printf("Nome: %s\n", f->nome);
    printf("Preco: %.2f\n", f->preco);
    printf("Diretor: %s\n", f->informacoes->diretor);
    printf("Ano: %d\n", f->informacoes->ano);
    printf("Genero: %s\n", f->informacoes->genero);
    printf("Faixa Etaria: %d\n", f->informacoes->faixaEtaria);
    printf("\n");
}

//FUNÇÕES DE MANIPULAÇÃO

//função que acessa e modifica o nome de um filme
void set_nome(Filme* f, char* novo){
    strcpy(f->nome, novo);
}

//função que acessa e modifica o preço de um filme
void set_preco(Filme* f, float novo){
    f->preco = novo;
}

//função que acessa e renomeia um diretor de um filme
void set_diretor(Filme* f, char* novo){
    strcpy(f->informacoes->diretor, novo);
}

//função que acessa e renomeia os gêneros de um filme
void set_genero(Filme* f, char* novo){
    strcpy(f->informacoes->genero, novo);
}

//função que acessa e modifica o ano de um filme
void set_ano(Filme* f, int novo){
    f->informacoes->ano = novo;
}

//função que acessa e modifica a faixa etária de um filme
void set_faixaetaria(Filme* f, int novo){
    f->informacoes->faixaEtaria = novo;
}