#include <stdio.h>
#include <iostream>


using namespace std;

int quantidade ;
struct No{
int valor;
struct No *proximo;

};
struct No *topo = NULL;

void Push(int valor){
struct No *novoNO;
novoNO = new struct No[3];
novoNO -> valor = valor;
if (topo == NULL)
    novoNO->proximo= NULL;
    else{
        novoNO->proximo = topo;
        quantidade +=1;

    }
topo = novoNO;
}
void Pop(){

if (topo == NULL){
    cout << "Pilha vazia \n";
    }
    else{
        struct No *temp = topo;
        cout << "elemento apagado : " << temp -> valor << "\n";
        topo = temp->proximo;
        delete []temp;
    }
}
void imprimeLista(struct No *n){
    while(n != NULL){
        /* code */
        cout << n-> valor << "   ";
        n = n->proximo;
    }
    }
void verificaPilha(){
if (topo == NULL)
    cout << "Sua pilha está vazia burrão mané" << "\n";
    else{
        cout << "sua pilha tem elementos dentro"<< "\n" ;
    }
}
void imprimeTopo(struct No *n){
        cout << "\n" << n-> valor << "   " << "\n\n";
}
void quantidadePilha(){

    cout << quantidade ;
    cout << "\n\n" ;
}
void pilhaInversa(){

}
int main(){
Push(10);
Push(20);
Push(20);
Pop();
verificaPilha();
imprimeTopo(topo);
quantidadePilha();
imprimeLista(topo);

}
