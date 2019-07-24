#include <iostream>

using  namespace std;


struct No{
    int valor;
    No* proximo;
    No* anterior;
};



void inserirTopo(struct No** topo_ref, int novo_valor){
    struct No* novo_no = new struct No;
    novo_no ->valor = novo_valor;
    novo_no ->proximo = (*topo_ref);
    novo_no -> anterior = NULL;
    if((*topo_ref) != NULL){
        (*topo_ref) ->anterior = novo_no;

    } else{
        (*topo_ref) = novo_no;
    }


}
void imprimeLista(struct No *no){
cout << "\nAtravessa em direçao ao Final da Lista: ";
while (no != NULL){
cout << no -> valor << " ";
no = no -> proximo;
}

}
void inserirDepois(struct No* no, int valor_anterior, int novo_valor){
    while (no->valor != valor_anterior){
        no = no-> proximo;
    }
    struct No* no_anterior = no;
    struct No* novo_no = new struct No;
    novo_no -> valor = novo_valor;
    novo_no -> proximo = no_anterior ->proximo;
    no_anterior ->proximo = novo_no;
    novo_no ->anterior = no_anterior;

    if (novo_no-> proximo !=  NULL){
        novo_no ->proximo->anterior = novo_no;
    }
}
void inserirFim(struct No** topo_ref,int novo_valor){
    struct No* novo_no = new struct No;
    struct No *ultimo = *topo_ref;
    novo_no->valor = novo_valor;
    novo_no->proximo = NULL;
    if (*topo_ref == NULL){
        novo_no-> anterior = NULL;
        *topo_ref = novo_no;
        return;
    }
    while (ultimo->proximo != NULL){
        ultimo = ultimo->proximo;
        ultimo->proximo = novo_no;
        novo_no->anterior = ultimo;
        return;
    }

}
void imprimirListainvertida(No *no){
 struct No *ultimo;
while (no->proximo != NULL)
no = no->proximo;
ultimo = no;

cout << "\nAtravessa em direção ao Inicio da Lista: ";
while (ultimo != NULL){

cout << ultimo->valor << " ";
ultimo = ultimo->anterior;

    
}}
   

void removerNo(struct No *no, int valor){
    while (no-> valor != valor && no->proximo){
        no = no-> proximo;
    }
    if(no->proximo != NULL) {
        no->anterior->proximo = no->proximo;
        no->proximo->anterior = no->anterior;
    }else
        no->anterior->proximo = no->proximo;

        free(no);


}
void inserirAntes(struct No *no, int antes, int novo){
    while (no ->valor != antes)
    no = no->proximo;
    
    no - no->anterior;
    struct No* no_anterior = no;
    struct No* novo_valor = new struct No;
    novo_valor ->valor = novo;
    no_anterior ->proximo = novo_valor;
    novo_valor->proximo = no_anterior->proximo;
    novo_valor->anterior = no_anterior;
    if (novo_valor->proximo != NULL)
    novo_valor->proximo->anterior = novo_valor;
    
    
}
int main(){
    struct No* topo = NULL;
    
    inserirFim(&topo,3);
    inserirTopo(&topo,1);
    inserirDepois(topo,3,2);
    inserirAntes(topo,3,1);
    imprimeLista(topo);
    cout << "\n\n";
    imprimirListainvertida(topo);


}

