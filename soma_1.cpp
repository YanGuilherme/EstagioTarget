#include <iostream>

using namespace std;

int main(){
    int indice = 13, k = 0, soma = 0;
    while(k<indice){
        k = k + 1;
        soma = soma + k;
    }
    //O total da variável soma será 91,
    // que é o resultado da soma de todos os numeros de 0 a 13.

    cout << soma << endl;
    
    return 0;
}