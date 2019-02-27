#include <stdio.h>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct No*{

    int valor;
    struct No *proximo;
}


*topo = NULL;

void Push(int);
void Pop();
void Imprimir();
