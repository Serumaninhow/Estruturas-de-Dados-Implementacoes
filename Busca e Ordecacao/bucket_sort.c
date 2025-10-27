#include <stdio.h>
#include <stdlib.h>
//=============================================
#define TAM 5 //tamanho do balde

struct balde{
    int qtd;
    int valores[TAM];
};

void insertionSort(int *V, int N){
    int i, j, aux;
    for(i = 1; i < N; i++){
        aux = V[i];
        for(j = i; (j > 0) && (aux < V[j - 1]); j--)
            V[j] = V[j - 1];
        V[j] = aux;
    }
}

void bucketSort(int *V, int N){
    int i, j, maior, menor, nroBaldes, pos;
    struct balde *bd;
    //Acha maior e menor valor
    maior = menor = V[0];
    for(i = 1; i < N; i++){
        if(V[i] > maior) maior = V[i];
        if(V[i] < menor) menor = V[i];
    }
    //Inicializa baldes
    nroBaldes = (maior - menor) / TAM + 1;
    bd = (struct balde *) malloc(nroBaldes * sizeof(struct balde));
    for(i = 0; i < nroBaldes; i++)
        bd[i].qtd = 0;
    //Distribui os valores nos baldes
    for(i = 0; i < N; i++){
        pos = (V[i] - menor)/TAM;
        bd[pos].valores[bd[pos].qtd] = V[i];
        bd[pos].qtd++;
    }
    //Ordena baldes e coloca de volta no array
    pos = 0;
    for(i = 0; i < nroBaldes; i++){
        insertionSort(bd[i].valores,bd[i].qtd);
        for(j = 0; j < bd[i].qtd; j++){
            V[pos] = bd[i].valores[j];
            pos++;
        }
    }
    free(bd);
}

//=============================================

#define MAX 100
void countingSort(int *V, int N){
	int i, j, k;
	int baldes[MAX];
	for(i = 0; i < MAX; i++)
		baldes[i] = 0;

    for(i = 0; i < N; i++)
        baldes[V[i]]++;

	for(i = 0, j = 0; j < MAX; j++)
		for(k = baldes[j]; k > 0; k--)
			V[i++] = j;
}
//=============================================

void printfVet(int *V  , int N){
    int i;
    for(i = 0; i < N; i++)
        printf("%2d ",V[i]);
    printf("\n");
}

int main(){
    int vet[7] = {23,4,67,8,90,54,21};
    int N = 7;

    printf("Sem ordenar:\n");
    printfVet(vet,N);

    bucketSort(vet,N);
    //countingSort(vet,N);

    printf("Ordenado:\n");
    printfVet(vet,N);

    return 0;
}
