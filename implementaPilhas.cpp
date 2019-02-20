#include <stdlib.h>
#include <iostream>



using namespace std;
#define MAX_SIZE  10
int A[MAX_SIZE];
int top = -1;

void Push(int x){

if (top == MAX_SIZE - 1){
    cout << "lotado";
    return ;

}
top += 1;
A[top] = x;

//A[++top] = x ;

}
void Pop (){
if (top == -1){
    cout << "\n vazio";
    return ;

}
    top--;

}
void Imprimir(){

for (int i = 0; i < top+1 ;i++ )
    cout << A[i] << "          ";
}
void Estado(){
if (top == -1){
        cout << "\t  ta vazia  ";
}else if(top == MAX_SIZE - 1){
    cout << "\t  ta lotada  ";
    }else if(top > -1 && top <= MAX_SIZE){
        cout << " \t ta funcionando  ";}

        cout << "A Pilha tem " << top+1 <<" elementos";
        cout << "\n";
        cout << "O Topo da pilha eh  " << A[top];

}

int main(){

Push(1);
Push(4);


Imprimir();

Estado();

return 0;
}
