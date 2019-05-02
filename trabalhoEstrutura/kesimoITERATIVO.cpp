#include <iostream>

using namespace std;

int main(){



int a[4] = {1,-1,3,-2};
int tamanhovetor = sizeof(a)/4;
int k = 2;
int aux = 0;
for (int i = 0 ;i<tamanhovetor ;i++ ){
    for (int j = 0; j <tamanhovetor ; j++) {
   if(a[i]<a[j]){
    aux = a[i];
    a[i] = a[j];
    a[j] = aux;
    }
    }
}
cout << a[k-1];


}




