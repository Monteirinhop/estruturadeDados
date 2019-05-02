#include <iostream>

using namespace std;
int fibonnaci(int nr);

int main(){
int quantidade = 10;
for (int i = 1 ;i <= quantidade ;i++ ){
    cout << fibonnaci(i) << "  ";
}
}
fibonnaci(int nr){
if (nr == 1 || nr == 2){
    return 1 ;
}else{
return fibonnaci(nr - 1) + fibonnaci(nr - 2);

}


}

