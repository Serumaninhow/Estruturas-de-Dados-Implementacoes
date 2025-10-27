#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"

/*
Para executar
no bash do editor de texto ou powershell
mkdir output
gcc -Wall -g *.c -o output/main
.\output\main
*/

int main(){
    ArvAVL* avl;
    int res,i;
    int N = 8, dados[8] = {7,8,3,4,2,1,6,5};

    avl = cria_ArvAVL();

    for(i=0;i<N;i++){
        printf("========================\n");
        printf("Inserindo: %d\n",dados[i]);
        res = insere_ArvAVL(avl,dados[i]);
        //printf("\n\nres = %d\n",res);
        preOrdem_ArvAVL(avl);
        printf("\n\n");
        //system("pause");
    }


    printf("\n=====================\n");

    int NR = 2, dadosR[2] = {7,6};
    for(i=0;i<NR;i++){
        printf("\nRemovendo: %d\n",dadosR[i]);
        res = remove_ArvAVL(avl,dadosR[i]);
        printf("\n\nres = %d\n",res);
        preOrdem_ArvAVL(avl);
        printf("\n=====================\n");
    }

    libera_ArvAVL(avl);
    return 0;
}
