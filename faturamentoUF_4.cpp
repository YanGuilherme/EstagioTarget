#include <iostream>
using namespace std;


int main(){
    const double SP = 67836.43;
    const double RJ = 36678.66;
    const double MG = 29229.88;
    const double ES = 27165.48;
    const double OUTROS = 19849.53;

    double total = SP + RJ + MG + ES + OUTROS;

    cout << "Percentual de representação" << endl;
    cout << "SP: " << SP/total*100 << "%" << endl;
    cout << "RJ: " << RJ/total*100 << "%" << endl;
    cout << "MG: " << MG/total*100 << "%" << endl;
    cout << "ES: " << ES/total*100 << "%" << endl;
    cout << "OUTROS: " << OUTROS/total*100 << "%" << endl;

    return 0;
}