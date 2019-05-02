#include <iostream>

using namespace std;



int main(){

        int valorLido;
		int n0 = 0; //Valores iniciais da sequencia Fibonacci
		int n1 = 1; //Valores iniciais da sequencia Fibonacci
		int aux;

        cin >> valorLido;

        if (valorLido == 1)
            cout << n0;
        if (valorLido == 2)
        cout << n1;

        for (int i = 2; i <= valorLido ;i++ ){

        aux = n0 + n1;
			n0 = n1;
			n1 = aux;
            cout << "   " << aux;

        }

}


