// FUNCOES DO SISTEMA
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
// FUNCOES LOCAIS
#include "funcoes-calcular.h"
// FUNCOES LOCAIS
using namespace std;

int main(){
    //Devid e Iago
    setlocale(LC_ALL, "Portuguese");
    float num1;
    char op;
    char op2;
    float resultado;

    cout << "Você deseja utilizar a calculadora[S/N]" << endl;
    cin >> op;
    limpar();

    while (op == 's' || op == 'S')
        {
            cout << "Digite um número: " << endl;
            cin >> num1;
            limpar();
            cout << "Digite a operação que deseja utilizar " << endl;
            cout << "[+] para somar" << endl;
            cout << "[-] para subtrair" << endl;
            cout << "[*] para multiplicar" << endl;
            cout << "[/] para dividir" << endl;
            cout << "[^] para potenciação" << endl;
            cout << "[Q] para raiz quadrada" << endl;
            cout << "[C] para raiz cúbica" << endl;
            cin >> op2;
            limpar();
            switch (op2){
            case '+':
                resultado = soma(num1);
                cout << "A soma vale:" << resultado << endl;
                break;
            case '-':
                resultado = dif(num1);
                cout << "A diferença vale:" << resultado << endl;
                break;
            case '*':
                resultado = produto(num1);
                cout << "O produto vale:" << resultado << endl;
                break;
            case '/':
                resultado = divi(num1);
                cout << "O quociente vale:" << resultado << endl;
                break;
            case '^':
                resultado = poten(num1);
                cout << "A potencia vale:" << resultado << endl;
                break;
            case 'Q':
            case 'q':
                resultado = raiz(num1);
                cout << "A raiz quadrada vale:" << resultado << endl;
                break;
            case 'C':
            case 'c':
                resultado = cubo(num1);
                cout << "A raiz cubica vale:" << resultado << endl;
                break;
            default:
                cout << "Não foi possível realizar esta operação.";
                return 0;
                break;



        }

            cout << "Você ainda quer continuar a usar a calculadora? [S/N]" << endl;
            cin >> op;
            limpar();

    }
    return 0;
}
