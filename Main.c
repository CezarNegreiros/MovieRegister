#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Cabecalho.h"

int main()
{
    
    int indiceMenu=0;
    int qtdFilmes;
    printf("Entre com o numero de filmes: ");

    scanf("%d", &qtdFilmes);
    printf("\n");
    
    Filme* listafilme[qtdFilmes];

    for (int i = 0; i < qtdFilmes; i++)
    {
        listafilme[i] = (Filme *)malloc(sizeof(Filme));
        listafilme[i]->informacoes = malloc(sizeof(Info));

        printf("Nome: ");
        scanf(" %[^\n]", listafilme[i]->nome);
        printf("Preco: ");
        scanf("%f", &listafilme[i]->preco);
        printf("Diretor: "); 
        scanf(" %[^\n]", listafilme[i]->informacoes->diretor);
        printf("Genero: ");
        scanf(" %[^\n]", listafilme[i]->informacoes->genero);
        printf("Ano: ");
        scanf("%d", &listafilme[i]->informacoes->ano);
        printf("Faixa Etaria: ");
        scanf("%d", &listafilme[i]->informacoes->faixaEtaria);
        printf("\n");
    }

    print_tabela(listafilme, qtdFilmes);

    printf("\nMENU DE OPCOES\n\n");
    printf("1 - CADASTRAR DE NOVO TITULO\n");
    printf("2 - ATUALIZAR INFO DE UM TITULO\n");
    printf("3 - EXCLUIR UM TITULO\n");
    printf("4 - FINALIZAR OPERACAO\n\n");

    do{

        scanf("%d", &indiceMenu);

        switch (indiceMenu){

        case 1:/*
             num_filmes++;
            *tabela = realloc(tabela, num_filmes * sizeof(Filme ));
            tabela[num_filmes - 1] = (Filme *)malloc(sizeof(Filme));
            tabela[num_filmes - 1]->informacoes = malloc(sizeof(Info));
            tabela[num_filmes - 1] = criar_filme()*/;
    break;
        case 2:

            printf("\n");
            printf("1 - RENOMEAR TITULO\n");
            printf("2 - ATUALIZAR PRECO\n");
            printf("3 - ATUALIZAR DIRETOR\n");
            printf("4 - ATUALIZAR GENERO\n");
            printf("5 - ATUALIZAR ANO\n");
            printf("6 - ATUALIZAR FAIXA ETARIA\n");

            int indiceMenuMod;

            scanf("%d", &indiceMenuMod);

            if (indiceMenuMod == 1)
            {   
                char* nome;
                scanf(" %[^\n]",nome);
                set_nome(listafilme[indiceMenuMod], nome);
            }
            else if (indiceMenuMod == 2)
            {
                set_preco(listafilme[indiceMenuMod], 
                scanf("%f", &listafilme[indiceMenuMod]->preco));
            }
            else if (indiceMenuMod == 3)
            {   char* diretor;
                scanf(" %[^\n]",diretor);
                set_diretor(listafilme[indiceMenuMod],diretor);
            }
            else if (indiceMenuMod == 4)
            {   char *genero;
                scanf(" %[^\n]",genero);
                set_genero(listafilme[indiceMenuMod], genero);
            }
            else if (indiceMenuMod == 5)
            {
                set_ano(listafilme[indiceMenuMod], 
                scanf("%d", &listafilme[indiceMenuMod]->informacoes->ano));
            }
            else if (indiceMenuMod == 6)
            {
                set_faixaetaria(listafilme[indiceMenuMod], 
                scanf("%d", &listafilme[indiceMenuMod]->informacoes->faixaEtaria));
            }

            break;

        case 3 :free_filme(listafilme);
                qtdFilmes--;
                print_tabela(listafilme, qtdFilmes);
                break;

        case 4:printf("Cadastro Finalizado\n");break;
        }

    } while (indiceMenu != 4);

    //menu();

    return 0;
}