#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1;
    float num2;
    char op;
    char op2;
    float resultado;

    cout << "Você deseja utilizar a calculadora[S/N]" << endl;
    cin >> op;
    system("CLS");

    while (op == 's' || op == 'S')
        {
            cout << "Digite um número: " << endl;
            cin >> num1;
            system("CLS");
            cout << "Digite a operação que deseja utilizar " << endl;
            cout << "[+] para somar" << endl;
            cout << "[-] para subtrair" << endl;
            cout << "[*] para multiplicar" << endl;
            cout << "[/] para dividir" << endl;
            cout << "[^] para potenciação" << endl;
            cout << "[Q] para raiz quadrada" << endl;
            cout << "[C] para raiz cúbica" << endl;
            cin >> op2;
            system("CLS");
            switch (op2){
            case '+':
                cout << "Digite o segundo número: " << endl;
                cin >> num2;
                system("CLS");
                resultado = num1 + num2;
                cout << "O resultado da soma é: " << resultado << endl;
                break;
            case '-':
                cout << "Digite o segundo número: " << endl;
                cin >> num2;
                system("CLS");
                resultado = num1 - num2;
                cout << "O resultado da subtração é: " << resultado << endl;
                break;
            case '*':
                cout << "Digite o segundo número: " << endl;
                cin >> num2;
                system("CLS");
                resultado = num1 * num2;
                cout << "O resultado da multiplicação é: " << resultado << endl;
                break;
            case '/':
                cout << "Digite o segundo número: " << endl;
                cin >> num2;
                system("CLS");
                resultado = num1 / num2;
                cout << "O resultado da divisão é: " << resultado << endl;
                break;
            case '^':
                cout << "Digite o segundo número: " << endl;
                cin >> num2;
                system("CLS");
                resultado = pow(num1,num2);
                cout << "O resultado da potência é: " << resultado << endl;
                break;
            case 'Q':
            case 'q':
                system("CLS");
                resultado = sqrt(num1);
                cout << "O resultado do radical é: " << resultado << endl;
                break;
            case 'C':
            case 'c':
                system("CLS");
                resultado = pow(num1, 1.0/3.0);
                cout << "O resultado do radical é: " << resultado << endl;
                break;
            default:
                cout << "Não foi possível realizar esta operação.";
                return 0;
                break;



        }

            cout << "Você ainda quer continuar a usar a calculadora? [S/N]" << endl;
            cin >> op;
            system("CLS");

    }
    return 0;
}
