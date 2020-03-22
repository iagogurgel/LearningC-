#include <math.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

void limpar(){

    #ifdef WIN
    system("CLS");
    #elif linux
    system("clear");
    #endif // linux
}

float soma(float n1){
    float n2;
    cout << "Digite outro número:";
    cin >> n2;
    return n1 + n2;
}
float dif(float n1){
    float n2;
    cout << "Digite um numero:";
    cin >> n2;

    if (n1 >= n2){
        return n1 - n2;
    }
    else{
        return n2 - n1;
    }
}
float produto(float n1){
    float n2;
    cout << "Digite um numero:";
    cin >> n2;

    return n1 * n2;

}
float divi(float n1){

    float n2;
    cout << "Digite um numero:";
    cin >> n2;

    return n1 / n2;
}
float poten(float n1){

    float n2;
    cout << "Digite um numero:";
    cin >> n2;

    return pow(n1, n2);
}
float raiz(float n1){
    return sqrt(n1);
}
float cubo(float n1){
    return pow(n1, 1.0/3.0);
}
