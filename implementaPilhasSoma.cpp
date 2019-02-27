#include <iostream>
#include <stack>
#include <vector>

using namespace std;

#define tamanhoMaximo 3
vector<char> vetorSoma ;
vector<char> vetorNumero;
vector<char> vetorOperacao;
int top ;
void imprimeVetor(){

for (int i = 0; i < vetorSoma.size() ;i++ ){
        cout << "   " << vetorSoma[i] << endl;
        top = i;
    }

}
void estadoPilha(){
    if (vetorSoma.empty())
    cout << "vetor vazio bro";
    else
        cout << "vetor com elementos meu peixe" << endl;

        cout << "Sua pilha tem : " << vetorSoma.size() << " Elementos";
        cout << endl;
        cout << "O elemento topo da sua pilha eh de : " << vetorSoma[top] ;

}

int main(){
int flag ;
for (int i = 0; i < 3 ; i++ ){
    cout << "insira mumero + ou -" ;
    cin >> flag;

    if (flag == '+'){
        vetorOperacao[i] = flag;
    }if (flag == '-'){
        vetorOperacao[i] =flag;
    }else if(flag != '+' && flag != '-'){
        vetorNumero[i] = flag;
}}
    imprimeVetor();
    estadoPilha();





}


