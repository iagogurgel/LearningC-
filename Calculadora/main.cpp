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

    cout << "Voc� deseja utilizar a calculadora, se sim digite 'S'." << endl;
    cout << "Se n�o deseja utilizar, digite 'N'." << endl;
    cin >> op;
    system("CLS");

    while (op == 's' || op == 'S'){
            cout << "Digite um n�mero: " << endl;
            cin >> num1;
            system("CLS");
            cout << "Digite outro n�mero: " << endl;
            cin >> num2;
            system("CLS");
            cout << "Se deseja somar os n�meros, digite '+'." << endl;
            cout << "Se deseja subtrair os n�meros, digite '-'." << endl;
            cout << "Se deseja multiplicar os n�meros, digite '*'." << endl;
            cout << "Se deseja dividir os n�meros, digite '/'." << endl;
            cout << "Se deseja potencializar os n�meros, digite 'P'." << endl;
            cout << "Se deseja radicalizar o primeiro n�mero, digite 'R'." << endl;
            cin >> op2;
            system("CLS");
            switch (op2){
            case '+':
                resultado = num1 + num2;
                cout << "O resultado �: " << resultado << endl;
                break;
            case '-':
                resultado = num1 - num2;
                cout << "O resultado �: " << resultado << endl;
                break;
            case '*':
                resultado = num1 * num2;
                cout << "O resultado �: " << resultado << endl;
                break;
            case '/':
                resultado = (float)num1 / num2;
                cout << "O resultado �: " << resultado << endl;
                break;
            case 'P':
            case 'p':
                resultado = pow((double)num1,(double)num2);
                cout << "O resultado �: " << resultado << endl;
                break;
            case 'R':
            case 'r':
                resultado = sqrt(num1);
                cout << "O resultado �: " << resultado << endl;
                break;
            default:
                cout << "N�o foi poss�vel realizar esta opera��o.";
                return 0;
                break;



            }

            cout << "Voc� ainda quer continuar a usar a calculadora?" << endl;
            cin >> op;

    }
    return 0;
}
