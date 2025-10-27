#include "PilhaUsandoListaDinEncad.h" //inclui os Protótipos

Pilha* cria_Pilha(){
    return cria_lista();
}
void libera_Pilha(Pilha* pi){
    libera_lista(pi);
}
int consulta_topo_Pilha(Pilha* pi, struct aluno *al){
    return consulta_lista_pos(pi,1,al);
}
int insere_Pilha(Pilha* pi, struct aluno al){
    return insere_lista_inicio(pi,al);
}
int remove_Pilha(Pilha* pi){
    return remove_lista_inicio(pi);
}
int tamanho_Pilha(Pilha* pi){
    return tamanho_lista(pi);
}
int Pilha_vazia(Pilha* pi){
    return lista_vazia(pi);
}
int Pilha_cheia(Pilha* pi){
    return 0;
}
void imprime_Pilha(Pilha* pi){
    imprime_lista(pi);
}
