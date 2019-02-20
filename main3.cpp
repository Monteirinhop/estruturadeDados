#include <stdlib.h>
#include <iostream>

using namespace std;


int main(){
    int entrada, n,maior = 0;
    int qtd = 0;
    int *numeros = new int[qtd];
    do{
        cout << "Digite um valor inteiro (0 para terminar): ";
        cin >> entrada;
        qtd++;

    if (numeros != NULL){
        numeros[qtd - 1] = entrada;
    }
        else{
            delete(numeros);
            cout << "memoria deletada";
            exit(1);
        }

    }while (entrada !=0);

    cout << "Numeros digitados: ";
    for (n = 0; n < qtd; n++){
        cout << numeros[n] << " ";
}
    for (n = 0; n < qtd ;n++ ){
        if (numeros[n] > maior ){

            maior = numeros[n];
        }


    }
    cout << "\n O Maior numero eh " << maior << " ";


    delete(numeros);

    return 0;




}
