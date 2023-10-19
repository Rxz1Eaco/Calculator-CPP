#include <iostream>
using namespace std;
int main()
{
    /*PROJETO CALCULADORA USANDO CPP*/
    /*
        Criaddo por : Edilson Rocha
        Versão:  1
        Linguagem de Programação : CPP
    */
    string nome;
    double n1, n2;
    char op;

    cout << "--------Seja Bem-vindo a Calculadora CPP--------" << endl;
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << nome << ", escolha uma operacao para ser feita na calculadora; + , - , * , /" << endl;
    cin >> op;
    cout << "-------Calculadora CPP-------" << endl;
    cout << "Digite o primeiro de numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo de numero: " << endl;
    cin >> n2;
    switch (op)
    {
    case '+':
        cout << nome << " escolheu a operacao de soma" << endl;
        cout << "A soma entre o numero " << n1 << " + o numero " << n2 << " = " << n1 + n2 << endl;
        break;
    case '-':
        cout << nome << " escolheu a operacao de subtração" << endl;
        cout << "A subtracao entre o numero " << n1 << " - o numero " << n2 << " = " << n1 - n2 << endl;
        break;
    case '*':
        cout << nome << " escolheu a operacao de multiplicao" << endl;
        cout << "A multiplicao entre o numero " << n1 << "  * o numero " << n2 << " = " << n1 * n2 << endl;
        break;
    case '/':
        cout << nome << "escolheu a operacao de divisao" << endl;
        cout << "A divisao entre o numero " << n1 << "/ o numero " << n2 << " = " << n1 / n2 << endl;
        break;
    default:
        cout << "Operação nao encontrada" << endl;
        break;
    }
    return 0;
}