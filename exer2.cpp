#include <iostream>
#include <iomanip>

using namespace std; 

int main() {

    int A,B;
    cout << "Digite um numero inteiro!" << endl;
    cin >> A;
    cout << "Digite novamente um numero inteiro!";
    cin >> B;
    
    if (A % B == 0 || B % A == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }
    
    return 0;
}



