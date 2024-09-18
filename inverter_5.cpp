#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string entrada, saida;
    cout << "Digite a entrada: ";
    getline(cin, entrada); 

    for(int i = entrada.size()-1 ; i >= 0 ; i--){
        saida += entrada[i];
    }

    cout << "Saida invertida: " << saida << endl;
    return 0;
}