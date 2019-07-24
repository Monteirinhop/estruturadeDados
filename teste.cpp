#include <iostream>
using namespace std;

int main()
{

     int maiorpar = 0, mediapar = 0, menorimpar = 0, mediaimpar = 0,valor = 0, vetor[10], contadorPar = 0, totalNumeroPar = 0,contadorImpar = 0,totalNumeroImpar = 0;
    for(int i=0;i<10;i++){
        cout<<"Digite os valores:";
        cin >> valor;
          vetor[i] = valor;
    }
    menorimpar = vetor[0];
    for (int i = 0; i < 10 ; i++)
    {
        if (vetor[i] %2 == 0 ){
                contadorPar++;
                totalNumeroPar += vetor[i];
                if (vetor[i] > maiorpar)
                {
                   maiorpar = vetor[i];
                }

        }
        if (vetor[i] %2 == 1)
        {
            contadorImpar++;
            totalNumeroImpar += vetor[i];

            if (vetor[i] < menorimpar)
            {
                menorimpar = vetor[i];
            }

        }


    }
     if(contadorPar!=0){
            cout << "Maior PAR "<< maiorpar<< "\n";
            mediapar = totalNumeroPar / contadorPar;
            cout << "Media PAR "<< mediapar<< "\n";
        }
        if(contadorImpar!=0){
            cout<<"Menor IMPAR "<< menorimpar<< "\n";
            mediaimpar = totalNumeroImpar / contadorImpar;
            cout << "Media IMPAR "<< mediaimpar<<"\n";
        }
}
