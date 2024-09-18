#include <iostream>
using namespace std;

int fibonacci(int a){
    if(a < 2){
        return 1;
    }
        return fibonacci(a - 1) + fibonacci(a - 2);
}

int main(){
    int numero_entrada, indice = 0;
    cout << "Digite o numero: ";
    cin >> numero_entrada;
    bool pertence = false;
    do{
        fibonacci(indice);
        if(fibonacci(indice) == numero_entrada){
            pertence = true;
            break;
        }else{
            indice++;
        }
    }while(fibonacci(indice) <= numero_entrada);

    pertence ? cout << "Pertence" << endl : cout << "Nao pertence" << endl;
    return 0;
}