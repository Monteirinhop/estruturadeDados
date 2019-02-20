#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
int i,n;

cout << "qtd de nr ?    : ";
cin >> i;

int *pData = new int[i];

for (n =0; n < i ; n++ ){
cout << "digite o " << n+ 1 << "o. numero:";
cin >> pData[n];

}

cout << "vc digitou : " ;
    for (n = 0;n<i ;n++ ) cout << "seu nr eh : " << pData[n] << "  ";

    delete(pData);
    return 0 ;

}
