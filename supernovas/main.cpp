#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char op;
    int op2;
    int op3;
    int while1;
    while (while1 = 1){
    cout << "Deseja observar as supernovas antigas ou modernas: " << endl;
    cout << "Se deseja observar as antigas, digite A" << endl;
    cout << "Se deseja observar as modernas, digite M" << endl;
    cout << "Se deseja fechar o programa, digite F" << endl;
    cin >> op;
    system("CLS");
        switch(op){
            case 'F':
            case 'f':
                return 0;
                break;
            case 'A':
            case 'a':
                cout << "( 1 ) SN 185" << endl;
                cout << "( 2 ) SN 386" << endl;
                cout << "( 3 ) SN 393" << endl;
                cout << "( 4 ) SN 1006" << endl;
                cout << "( 5 ) SN 1054" << endl;
                cout << "( 6 ) SN 1572" << endl;
                cout << "( 7 ) SN 1604" << endl;
                cin >> op2;
                system("CLS");
                switch(op2){
                    case 1:
                        cout << "A supernova SN 185 faz parte da constela��o de Centaurus." << endl;
                        cout << "Tem uma magnitude aparente de -4." << endl;
                        cout << "Est� a 8.200 anos-luz da Terra." << endl;
                        cout << "Ela foi produzida a partir de uma explos�o de uma an� branca." << endl;
                        cout << "Ela se localiza em nossa gal�xia, a Via L�ctea" << endl;
                        cout << "Digite '1' para voltar" << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 2:
                        cout << "A supernova SN 386 faz parte da constela��o de Sagittarius." << endl;
                        cout << "Tem uma magnitude aparente de +1.5." << endl;
                        cout << "Est� a 14.700 anos-luz da Terra." << endl;
                        cout << "Ela se localiza em nossa gal�xia, a Via L�ctea" << endl;
                        cout << "Digite '1' para voltar " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 3:
                        cout << "A supernova SN 393 faz parte da constela��o de Scorpius." << endl;
                        cout << "Tem uma magnitude aparente de -0." << endl;
                        cout << "Est� a 34.000 anos-luz da Terra." << endl;
                        cout << "Ela se localiza em nossa gal�xia, a Via L�ctea" << endl;
                        cout << "Digite '1' para voltar " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 4:
                        cout << "A supernova SN 1006 faz parte da constela��o de Lupus." << endl;
                        cout << "Tem uma magnitude aparente de -7.5." << endl;
                        cout << "Est� a 7.200 anos-luz da Terra." << endl;
                        cout << "Ela se localiza em nossa gal�xia, a Via L�ctea" << endl;
                        cout << "Digite '1' para voltar " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 5:
                        cout << "A supernova SN 1054 faz parte da constela��o de Taurus." << endl;
                        cout << "Tem uma magnitude aparente de -6." << endl;
                        cout << "Est� a 6.500 anos-luz da Terra." << endl;
                        cout << "Ela foi produzida a partir de uma explos�o de estrela massiva." << endl;
                        cout << "Ela se localiza em nossa gal�xia, a Via L�ctea" << endl;
                        cout << "Digite '1' para voltar " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 6:
                        cout << "A supernova SN 1572 faz parte da constela��o de Cassiopeia." << endl;
                        cout << "Tem uma magnitude aparente de -4." << endl;
                        cout << "Est� a 8.000 anos-luz da Terra." << endl;
                        cout << "Ela foi produzida a partir de uma explos�o de uma an� branca." << endl;
                        cout << "Ela se localiza em nossa gal�xia, a Via L�ctea" << endl;
                        cout << "Digite '1' para voltar " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 7:
                        cout << "A supernova SN 1604 faz parte da constela��o de Ophiuchus." << endl;
                        cout << "Tem uma magnitude aparente de -3." << endl;
                        cout << "Est� a 14.000 anos-luz da Terra." << endl;
                        cout << "Ela se localiza em nossa gal�xia, a Via L�ctea" << endl;
                        cout << "Digite '1' para voltar " << endl;
                        cin >> while1;
                        system("CLS");
                        break;



                }
                break;
            case 'M':
            case 'm':
                cout << "( 1 ) SN 1885A" << endl;
                cout << "( 2 ) SN 1987A" << endl;
                cout << "( 3 ) SN 2006gy" << endl;
                cout << "( 4 ) SN 2014J" << endl;
                cin >> op3;
                system("CLS");
                switch (op3){
                    case 1:
                        cout << "A supernova SN 1885A faz parte da constela��o de Andr�meda." << endl;
                        cout << "Tem uma magnitude aparente de +7." << endl;
                        cout << "Est� a 2.400.000 anos-luz da Terra." << endl;
                        cout << "Ela se localiza na gal�xia de Andr�meda." << endl;
                        cout << "Digite '1' para voltar " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 2:
                        cout << "A supernova SN 1987A faz parte da constela��o de Dorado." << endl;
                        cout << "Tem uma magnitude aparente de +2.9." << endl;
                        cout << "Est� a 160.000 anos-luz da Terra." << endl;
                        cout << "Ela se localiza na Grande Nuvem de Magalh�es." << endl;
                        cout << "Digite '1' para voltar " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 3:
                        cout << "A supernova SN 2006gy faz parte da constela��o de Perseus." << endl;
                        cout << "Tem uma magnitude aparente de +15." << endl;
                        cout << "Est� a 240.000.000 anos-luz da Terra." << endl;
                        cout << "Ela se localiza na gal�xia NGC 256." << endl;
                        cout << "Digite '1' para voltar  " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    case 4:
                        cout << "A supernova SN 2014J faz parte da constela��o de Ursa Major." << endl;
                        cout << "Tem uma magnitude aparente de +10.5." << endl;
                        cout << "Est� a 11.500.000 anos-luz da Terra." << endl;
                        cout << "Ela se localiza na gal�xia M82" << endl;
                        cout << "Digite '1' para voltar  " << endl;
                        cin >> while1;
                        system("CLS");
                        break;
                    default:
                        cout << "N�o foi poss�vel encontrar esta Supernova" << endl;
                        return 0;




                }
            default:
                return 0;
                break;

        }
    }
    return 0;
    }

