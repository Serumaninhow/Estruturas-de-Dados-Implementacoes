#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printfVet(int *V  , int N){
    int i;
    for(i = 0; i < N; i++)
        printf("%2d ",V[i]);

    issorted(V,N,1);
    printf("\n");
}

//============================================
void shellSort(int *V, int N){
    int i, j, h, aux;
    //calcula o h inicial
    h = 1;
    while(h < N/3)
        h= 3 * h + 1;

    while(h > 0){
        for(i = h; i < N; i++){
            aux = V[i];
            j = i;
            // efetua compara��es entre elementos com dist�ncia h:
            //printf("j - h: %d\n",j - h);
            while(j >= h && aux < V[j - h]){
                V[j] = V[j - h];
                j = j - h;
                //printf("j - h: %d\n",j - h);
            }
            V[j] = aux;
        }
        h = (h-1)/3; // atualiza o valor de h.
    }
}

int main(){
    //int N = 15, vet[15] = {91,16,24,67,8,84,41,90,21,39,5,1,56,71,15};
    //int N = 7, vet[7] = {23,4,67,-8,90,54,21};
    int N = 7, vet[7] = {23,90,54,4,67,-8,21};
    //int N = 10, vet[] = {-8, 4, 23, 54, 67, 90, 21, 34, -3, 10};
    //int N = 7, vet[] = {8,2,1,7,4,6,5};

    printfVet(vet,N);
    shellSort(vet,N);
    printfVet(vet,N);

    return 0;
}

