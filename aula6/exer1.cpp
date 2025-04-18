#include "iostream"
using namespace std;

int inverter(int num) {
    int inverte = 0;
    while (num != 0) {
        int digit = num % 10; 
        inverte = inverte * 10 + digit;
        num /= 10; 
    }
    return inverte;
}

int main() {
    int nume;
    cout << "Digite um número inteiro: ";
    cin >> nume;

    cout << "O reverso do número é: " << inverter(nume) << endl;

    return 0;
}

