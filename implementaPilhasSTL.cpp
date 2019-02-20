#include <iostream>
#include <stack>
#include <vector>

using namespace std;

#define tamanhoMaximo 10
vector<int> meuVetor ;
int top ;
void imprimeVetor(){

for (int i = 0; i < meuVetor.size() ;i++ ){
        cout << "   " << meuVetor[i] << endl;
        top = i;
    }

}
void estadoPilha(){
    if (meuVetor.empty())
    cout << "vetor vazio bro";
    else
        cout << "vetor com elementos meu peixe" << endl;

        cout << "Sua pilha tem : " << meuVetor.size() << " Elementos";
        cout << endl;
        cout << "O elemento topo da sua pilha eh de : " << meuVetor[top] ;

}
int main(){

    meuVetor.push_back(1);
    meuVetor.push_back(4);
    meuVetor.push_back(2);
    meuVetor.push_back(6);
    meuVetor.pop_back();
    meuVetor.push_back(20);
    imprimeVetor();
    estadoPilha();





}
