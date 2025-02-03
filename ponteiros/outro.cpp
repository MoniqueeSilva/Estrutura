// INICIO DAS DIRETIVAS DO COMPILADOR
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
using std::string;
using std::getline;

float passagemValor(float n1, float n2){
    float m = (n1+n2)/2;
    n1++;
    n2--;
    return m;
}

void passagemReferencia(float * p1, float * p2){
    (*p1) = (((*p1)+(*p2))/2);
}

int main(){
    cout<<"\n";
    float n1,n2;
    cin >> n1;//10
    cin >> n2;//8
    //passagemValor(n1, n2);
    passagemReferencia(&n1, &n2);
    cout<<"\n"<<n1;
    cout<<"\n"<<n2;
    cout<<"\n";
}