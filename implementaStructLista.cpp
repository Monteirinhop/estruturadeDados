#include <stdlib.h>
#include <iostream>

using namespace std;

int quantidade;
struct No{
int valor;
struct No *proximo;
};
struct No *topo = NULL;
struct No *fim = NULL;

void inserir(int valor){
struct No *novoNO;
novoNO = new struct No[3];
novoNO -> valor = valor;
if (topo == NULL)
    novoNO->proximo = fim;
    else{
        novoNO -> proximo = topo;
        topo = fim ;
        quantidade +=1;

    }

topo = novoNO;
}
void remover(){
if(fim != NULL){
struct No *temp = fim;
        cout << "elemento apagado : " << fim -> valor << "\n";
        fim = fim->proximo;
        delete []fim;


}
}
void imprimeLista(struct No *n){
    if ( n!=NULL){
            cout << n-> valor << "   ";
    imprimeLista(n->proximo);

    }if (n == topo)
        cout<<endl;

    }
int main(){
inserir(10);
inserir(20);
inserir(30);
imprimeLista(fim);

}

