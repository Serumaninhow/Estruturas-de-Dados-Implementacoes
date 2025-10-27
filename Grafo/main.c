#include <stdio.h>
#include <stdlib.h>
#include "Grafo.h"
int main(){
    /*
    int eh_digrafo = 1;
    Grafo* gr = cria_Grafo(5, 5, 0);

    insereAresta(gr, 0, 1, eh_digrafo, 0);
    insereAresta(gr, 1, 3, eh_digrafo, 0);
    insereAresta(gr, 1, 2, eh_digrafo, 0);
    insereAresta(gr, 2, 4, eh_digrafo, 0);
    insereAresta(gr, 3, 0, eh_digrafo, 0);
    insereAresta(gr, 3, 4, eh_digrafo, 0);
    insereAresta(gr, 4, 1, eh_digrafo, 0);

    imprime_Grafo(gr);
    printf("\nBusca \n");
    int vis[5];
    //buscaProfundidade_Grafo(gr, 0, vis);
    //buscaLargura_Grafo(gr, 0, vis);

    int i,ant[5];
    float dist[5];
    menorCaminho_Grafo(gr, 0, ant, dist);
    for(i=0; i<5; i++)
        printf("%d: %d -> %f\n",i,ant[i],dist[i]);

    libera_Grafo(gr);
    */

    /*
    int eh_digrafo = 0;//n�o � direcionado
    Grafo* gr = cria_Grafo(6, 6, 1);//� ponderado

    insereAresta(gr, 0, 1, eh_digrafo, 6);
    insereAresta(gr, 0, 2, eh_digrafo, 1);
    insereAresta(gr, 0, 3, eh_digrafo, 5);
    insereAresta(gr, 1, 2, eh_digrafo, 2);
    insereAresta(gr, 1, 4, eh_digrafo, 5);
    insereAresta(gr, 2, 3, eh_digrafo, 2);
    insereAresta(gr, 2, 4, eh_digrafo, 6);
    insereAresta(gr, 2, 5, eh_digrafo, 4);
    insereAresta(gr, 3, 5, eh_digrafo, 4);
    insereAresta(gr, 4, 5, eh_digrafo, 3);

    int i, pai[6];
    //arvoreGeradoraMinimaPRIM_Grafo(gr, 0, pai);
    arvoreGeradoraMinimaKruskal_Grafo(gr, 0, pai);
    for(i=0; i<6; i++)
        printf("%d: %d\n",pai[i],i);

    libera_Grafo(gr);
    */

    int eh_digrafo = 0;//n�o � direcionado
    Grafo* gr = cria_Grafo(6, 6, 1);//� ponderado

    insereAresta(gr, 0, 1, eh_digrafo, 5);
    insereAresta(gr, 0, 2, eh_digrafo, 2);
    insereAresta(gr, 1, 2, eh_digrafo, 1);
    insereAresta(gr, 1, 3, eh_digrafo, 5);
    insereAresta(gr, 2, 3, eh_digrafo, 8);
    insereAresta(gr, 2, 4, eh_digrafo, 10);
    insereAresta(gr, 3, 4, eh_digrafo, 15);
    insereAresta(gr, 3, 5, eh_digrafo, 6);
    insereAresta(gr, 4, 5, eh_digrafo, 2);

    int i,ant[6];
    float dist[6];
    menorCaminho_Grafo(gr, 5, ant, dist);
    for(i=0; i<6; i++)
        printf("%d: %d -> %f\n",i,ant[i],dist[i]);

    libera_Grafo(gr);

    return 0;
}
