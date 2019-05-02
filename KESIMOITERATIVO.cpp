#include <iostream>

using namespace std;

int main(){



int a[4] = {1,2,3,-1};
int menor = a[0];
for (int i = 0 ;i<4 ;i++ ){

 if(a[i]<menor){

menor = a[i];
}


}

cout <<  "Menor Elemento : " << menor ;

}
