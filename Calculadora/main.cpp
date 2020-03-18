#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    // Devid e Iago
    setlocale(LC_ALL, "Portuguese");
    int num1;
    int num2;
    char op;
    char op2;
    float resultado;

    cout << "Você deseja utilizar a calculadora, se sim digite 'S'." << endl;
    cout << "Se não deseja utilizar, digite 'N'." << endl;
    cin >> op;
    system("CLS");

    while (op == 's' || op == 'S'){
            cout << "Digite um número: " << endl;
            cin >> num1;
            system("CLS");
            cout << "Digite outro número: " << endl;
            cin >> num2;
            system("CLS");
            cout << "Se deseja somar os números, digite '+'." << endl;
            cout << "Se deseja subtrair os números, digite '-'." << endl;
            cout << "Se deseja multiplicar os números, digite '*'." << endl;
            cout << "Se deseja dividir os números, digite '/'." << endl;
            cout << "Se deseja potencializar os números, digite 'P'." << endl;
            cout << "Se deseja radicalizar o primeiro número, digite 'R'." << endl;
            cin >> op2;
            system("CLS");
            switch (op2){
            case '+':
                resultado = num1 + num2;
                cout << "O resultado é: " << resultado << endl;
                break;
            case '-':
                resultado = num1 - num2;
                cout << "O resultado é: " << resultado << endl;
                break;
            case '*':
                resultado = num1 * num2;
                cout << "O resultado é: " << resultado << endl;
                break;
            case '/':
                resultado = (float)num1 / num2;
                cout << "O resultado é: " << resultado << endl;
                break;
            case 'P':
            case 'p':
                resultado = pow((double)num1,(double)num2);
                cout << "O resultado é: " << resultado << endl;
                break;
            case 'R':
            case 'r':
                resultado = sqrt(num1);
                cout << "O resultado é: " << resultado << endl;
                break;
            default:
                cout << "Não foi possível realizar esta operação.";
                return 0;
                break;



            }

            cout << "Você ainda quer continuar a usar a calculadora?" << endl;
            cin >> op;

    }
    return 0;
}
