#include <iostream>
using namespace std;
void Push(int x){

if (top == MAX_SIZE - 1){
    cout << "lotado";
    return ;

}
top += 1;
A[top] = x;

}
void Pop (){
if (top == -1){
    cout << "\n vazio";
    return ;

}
    top--;

}
void fazHanoi(int discos,char origem, char destino, char aux){
    if (a[0] == 1){
        cout << "Move Discos " << discos << " de " << origem << " para " << destino << endl;

    }else{
        fazHanoi(discos-1,origem,aux,destino);

         cout << "Move Discos " << discos << " de " << origem << " para " << destino << endl;
         fazHanoi(discos-1,aux,destino,origem); // FAZ A TROCA DO ORIGEM PARA O AUX E DO AUX PRO DESTINO, NÃO PULANDO DIRETAMENTE PARA O DESTINO E PASSANDO PARA O AUX
    }


}

int main(){
int a[4],b[4],c[4];
int qtdDiscos = 0 ;
cout << "insira quantidade de discos que voce deseja na torre";
cin >> qtdDiscos ;
fazHanoi(qtdDiscos,'A','B','C');

}


