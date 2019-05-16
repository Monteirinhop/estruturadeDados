#include <iostream>
using namespace std;
int F5(int count ) {
    cout << count ;
    if( count < 3) {
        F5(F5(F5 (++ count ) ) ) ;
    }
    return count ;
}

int main(){

F5(1);



}

