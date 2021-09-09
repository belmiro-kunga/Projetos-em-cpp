// Aplicação de um Calculadora em  C++.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;


int main() {
    system("cls");
    // # 1 - Perguntar ao usuario qual é a tabuada desejada
    cout << "Que tabuada deseja? Digite um numero. " << endl;

    int n = 0;
    cin >> n;
    
    // e armazenar o valor em uma variavel
    // # 2 -  Implementar um laço de repetição FOR
    for(int i = 1; i<=10; i++){

    // # 3 - Imprimir a tabuada na tela
        cout<< i << " x " << n << " = " << i*n << endl; 
    }
    cout << "O Calculo foi da tabuada do Numero: " << n << endl;
    system("pause");
    return 0;
}
    


