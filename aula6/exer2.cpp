#include <iostream>

using namespace std;


int soma_num_quadrados(int numero) {
    int quadrado = numero * numero;
    int somaDigitos = 0;

    
    while (quadrado > 0) {
        somaDigitos += quadrado % 10; 
        quadrado /= 10; 
    }

    return somaDigitos;
}


void num_imp_mult3_50a500() {   
    int soma = 0;

    for (int i = 50; i <= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0) { 
            soma += i;
        }
    }

    cout << "A soma dos números ímpares múltiplos de 3 de 50 a 500 é: " << soma << endl;
}


double media_num(int quantidade) {
    int soma = 0, contador = 0;

    while (quantidade > 0) {
        int numero;
        cout << "Digite um número: ";
        cin >> numero;

        if (numero % 2 == 0) { 
            soma += numero;
            contador++;
        }

        quantidade--;
    }

    
    return (contador > 0) ? static_cast<double>(soma) / contador : 0;
}


int main() {
    cout << "||             Escolha uma opção                       ||" << endl;
    cout << "||1- Ver a média dos números pares                     ||" << endl;
    cout << "||2- Ver os números ímpares múltiplos de 3 de 50 a 500 ||" << endl;
    cout << "||3- Ver a soma dos dígitos do quadrado de um número    ||" << endl;
    cout << "|| ";
    
    int menu_choice;
    cin >> menu_choice;

    switch (menu_choice) {
        case 1: {
            cout << "Digite a quantidade de números a serem analisados: ";
            int quantidade;
            cin >> quantidade;
            double media = media_num(quantidade);
            if (media > 0) {
                cout << "A média dos números pares é: " << media << endl;
            } else {
                cout << "Não havia números pares na entrada." << endl;
            }
            break;
        }
        case 2: {
            num_imp_mult3_50a500();
            break;
        }
        case 3: {
            cout << "Digite um número para calcular a soma dos dígitos do seu quadrado: ";
            int num;
            cin >> num;
            int soma = soma_num_quadrados(num);
            cout << "A soma dos dígitos é: " << soma << endl; 
            break;
        }
        default:
            cout << "Opção inválida." << endl;
    }

    return 0;
}