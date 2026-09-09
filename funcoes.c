#include <stdio.h>
#include "estruras.h"

void cadastrar (Filme c1 [5]){
int i;

    for (i = 0; i < 5; i++){

        printf("----INFORME O FILME----\n");
        printf("Informe o titulo: ");
        scanf("%s", c1[i].Titulo);
        printf("Informe o Diretor: ");
        scanf("%s", c1[i].Diretor);
        printf("Informe a Duracao do Filme: ");
        scanf("%f", &c1[i].Duracao);
        printf("Informe o ano do lancamento: ");
        scanf("%d", &c1[i].anoDoLanamento);
    }

}

void listar (Filme l1[5]){

    int j;
    int contador = 1;

    printf("----LISTA DOS FILMES----\n");

    for (j = 0; j < 5; j++){

        
        printf("\nFilme %d: %s",contador,l1[j].Titulo);
        printf("\n");
        contador++;


    }

}

void exibir (Filme e1[5]){
    int escolha;

    printf("\nInforme qual Filme quer ver: ");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 5) {
    printf("Filme invalido");

    return;
}
    escolha = escolha - 1;

        printf("\nTitulo : %s\n", e1[escolha].Titulo);
        printf("\nDiretor: %s\n", e1[escolha].Diretor);
        printf("\nDuracao do Filme:  %.2f\n", e1[escolha].Duracao);
        printf("\nAno do lancamento:  %d\n", e1[escolha].anoDoLanamento);
        

}