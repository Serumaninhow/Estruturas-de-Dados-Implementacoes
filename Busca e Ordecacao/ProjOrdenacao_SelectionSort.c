
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int M = 0;

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

//============================================

void selectionSortMatricula(struct aluno *V, int N){
    int i, j, menor;
    struct aluno troca;
    for(i = 0; i < N-1; i++){
        menor = i;
        for(j = i+1; j < N; j++){
            if(V[j].matricula < V[menor].matricula)
                menor = j;
        }
        if(i != menor){
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
    }
}

//============================================


int main(){
    int i;

    struct aluno V[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {2,"Bianca",9.7,6.7,8.4},
                         {1,"Ana",5.7,6.1,7.4}};

    selectionSortMatricula(V,4);
    for(i = 0; i < 4; i++)
        printf("%d) %s\n",V[i].matricula,V[i].nome);

    return 0;
}
