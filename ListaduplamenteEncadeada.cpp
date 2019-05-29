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
struct No *ultimo;
cout << "\n Atravessa em direcao ao final da lista \t ";
while (no != NULL){
    cout << no->valor << "  ";
    ultimo = no;
    no = no ->proximo;
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
void inserirAntes(struct No** referencia, int novo_value){
    struct No* novo_no = new struct No;
    struct No* antes = *referencia;
    novo_no->valor = novo_value;
    novo_no->proximo = antes;
    if (*referencia == NULL){
        novo_no-> anterior = NULL;
        *referencia = novo_no;
        return;
    }
    while (antes->proximo != NULL){
        antes = antes->proximo;
        antes->proximo = novo_no;
        novo_no->anterior = antes;
        return;
    }

}
void imprimirListainvertida(No *n){
    cout << "Lista invertida: ";
   // cout << n->valor << "  ";

    while(n->proximo !=  NULL  ){
        n = n->proximo;
        int valor = n->valor;
        //cout << valor << "  ";
        //cout << n->valor << "  ";
    }
    cout << n-> valor << "  ";
    while(n->anterior != NULL){
        n = n->anterior;
        cout << n->valor << "  ";
    }
}

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
int main(){
    struct No* topo = NULL;

    inserirTopo(&topo, 10); /* 30→ 10→ NULL*/
    inserirDepois(topo,10,20); /*30→ 20→ 10→ NULL*/
    inserirFim(&topo, 30); /*10→ NULL*/
    inserirAntes(&topo, 30);
    imprimeLista(topo);
    cout << "\n\n"  ;
    imprimirListainvertida(topo);


}

