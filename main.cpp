#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;
int main (){
int i,n;

srand((unsigned)time(0));

cout << " Qual Tamanho da String :  ";
cin >> i;

char  *buffer = new char[i];

for (n = 0; n< i;n++ ){

    buffer[n] = rand()%26 + 97;
    buffer[i] = '\0';
}
cout << "string aleatoria : " <<buffer;
delete(buffer);

return 0;

}
