#include <iostream>

using namespace std;
int Quick(int vetor[], int inicio, int fim){

    int pivo, aux, i, j, meio;

    i = inicio;
    j = fim;

    meio = (int) ((i + j) / 2);
    pivo = vetor[meio];

    do{
        while (vetor[i] < pivo) i = i + 1;
        while (vetor[j] > pivo) j = j - 1;

        if(i <= j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i = i + 1;
            j = j - 1;
        }
    }while(j > i);

    if(inicio < j) Quick(vetor, inicio, j);
    if(i < fim) Quick(vetor, i, fim);

}
int main(){
int vetor[] = {-1,-2,3,4};
int tamanhoVetor = sizeof(vetor)/4;
int controle = 0;
int k = 2;


cout << vetor[k-1];






}
