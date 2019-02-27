#include <stdio.h>
#include <iostream>
#include <malloc.h>
using namespace std;

struct No{
    /* data */
    int valor ;
    struct No *proximo;
};
void imprimeLista(struct No *n);

main(){

    struct No* primeiro = NULL;
    struct No* segundo = NULL;
    struct No* terceiro = NULL;


    primeiro = (struct No*) malloc(sizeof(struct No));
    segundo = (struct No*) malloc(sizeof(struct No));
    terceiro = (struct No*) malloc(sizeof(struct No));

    primeiro-> valor = 1;
    primeiro-> proximo = segundo;

    segundo-> valor = 2;
    segundo-> proximo = terceiro;

    terceiro-> valor = 3;
    terceiro-> proximo = NULL;

    imprimeLista(primeiro);
}
void imprimeLista(struct No *n){
    while(n != NULL){
        /* code */
        cout << n-> valor << "   ";
        n = n->proximo;
    }


}
