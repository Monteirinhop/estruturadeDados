#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int A[4];

int atual;
int proximo;
struct No{
int valor;
struct No* proximo;
struct No* atual;

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

    }
topo = novoNO;
}
void Pop(){

if (topo == NULL){
    cout << "Pilha vazia \n";
    return;
    }
    else{
        struct No *temp = topo;

        topo = temp->proximo;

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
void fazPME(){
    int removido;
    Push(A[0]);
    for (int i = 1 ; i<4 ;i++ ){
        proximo = A[i];
        if (topo != NULL){
            removido = topo->valor;
            Pop();
            while (removido < proximo){
                cout << removido << " - >  " << proximo << "" << endl;
                if (topo != NULL){
                    removido = topo-> valor;
                    Pop();
                }else break;
            }
            if (proximo < removido){
                Push(removido);
            }
            Push(proximo);
        }
    }
    while (topo != NULL){
        cout << endl;
        cout << "   " << topo->valor << "   >>>" << "    -1" ;
        Pop();
    }
}
int main(){
A[0] = 20;
A[1] = 50;
A[2] = 30;
A[3] = 0;
fazPME();
}

