#include <math.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limpar(){

    #ifdef WIN
    system("CLS");
    #elif linux
    system("clear");
    #endif // linux
}
