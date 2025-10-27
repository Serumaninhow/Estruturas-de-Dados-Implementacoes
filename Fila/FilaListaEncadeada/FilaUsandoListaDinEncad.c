#include "FilaUsandoListaDinEncad.h" //inclui os Protótipos

Fila* cria_Fila(){
    return cria_lista();
}
void libera_Fila(Fila* fi){
    libera_lista(fi);
}
int consulta_Fila(Fila* fi, struct aluno *al){
    return consulta_lista_pos(fi,1,al);
}
int insere_Fila(Fila* fi, struct aluno al){
    return insere_lista_final(fi,al);
}
int remove_Fila(Fila* fi){
    return remove_lista_inicio(fi);
}
int tamanho_Fila(Fila* fi){
    return tamanho_lista(fi);
}
int Fila_vazia(Fila* fi){
    return lista_vazia(fi);
}
int Fila_cheia(Fila* fi){
    return lista_cheia(fi);
}
void imprime_Fila(Fila* fi){
    imprime_lista(fi);
}
