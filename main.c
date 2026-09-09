#include<stdio.h>
#include<stdlib.h>
#include "estruras.h"

int main (){

    Filme *filme;

    filme = calloc( 5, sizeof(Filme) );

    if(filme == NULL){

        printf("Erro");

        return 1;

    }

    int escolha = 1;

    while (escolha != 0) {

        printf("\n===MENU===\n");
        printf("1 - Cadastrar\n");
        printf("2 - Exibir\n");
        printf("3 - Listar\n");
        printf("0 - Sair\n");

        printf("\nInforme o numero da sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha){

            case 1:
                cadastrar(filme);
                break;
            case 2:
                exibir(filme);
                break;
            case 3:
                listar(filme);
                break;
            case 0:
                break;
            default:
                printf("numero invalido");
                break;

}

}



    free(filme);


    return 0;
}