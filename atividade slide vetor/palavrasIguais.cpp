#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string palavra1, palavra2;

    cout << "Digite uma palavra: ";
    cin >> palavra1;

    cout << "Digite outra palavra: ";
    cin >> palavra2;

    if(palavra1.size() != palavra2.size()){
        cout << "Palavras diferentes" << "\n";
    }else{
        bool igual = true;
        for(int i = 0; i < palavra1.size(); ++i){
            if(palavra1[i] != palavra2[i]){
                igual = false;
                break;
            }
        }
        if (igual) {
            cout << "Palavras iguais" << "\n";
        } else {
            cout << "Palavras diferentes" << "\n";
        }
    }
    return 0;
}