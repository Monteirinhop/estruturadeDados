#include <iostream>

using namespace std;
int fazkesimo(int vetor[], int tamanhoVetor, int controle){

if (tamanhoVetor < 0)
    return controle;
else if (vetor[tamanhoVetor]<controle)
    controle = vetor[tamanhoVetor];

    return fazkesimo(vetor,tamanhoVetor-1,controle);


}
int main(){
int vetor[] = {4,10,2,3,4,5,6,7,5};
int tamanhoVetor = sizeof(vetor)/4;
int controle = sizeof(vetor)/4;
int kesimo = fazkesimo(vetor,tamanhoVetor,controle);

cout << kesimo;




}
