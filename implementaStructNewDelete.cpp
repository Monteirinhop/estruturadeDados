#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int quantidade;
struct No{
int valor;
struct No *proximo;
};
struct No *topo = NULL;

void Push(int valor){
struct No *novoNO;
novoNO = new struct No;
novoNO -> valor = valor;
if (topo == NULL)
    novoNO->proximo= NULL;
    else{
        novoNO-> proximo = topo;
        quantidade ++;
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
        quantidade --;
        delete (temp);
    }
}
void imprimeLista(struct No *n){
    if ( n!=NULL){
            cout << n-> valor << "   ";
    imprimeLista(n->proximo);

    }if (n == topo)
        cout<<endl;

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
void imprimeInverso(struct No *top){
if ( top!=NULL){

    imprimeLista(top->proximo);
    cout << top-> valor << "   ";

    }

}


int main(){
Push(1);
Push(2);
Push(3);
Push(4);
Pop();
imprimeLista(topo);
imprimeInverso(topo);

}
