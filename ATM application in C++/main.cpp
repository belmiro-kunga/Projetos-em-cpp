// Aplicação de um ATM em  C++.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

void showMenu()
{
    cout << "**********MENU**********" << endl;
    cout << "1. verificar saldo" << endl;
    cout << "2. deposito" << endl;
    cout << "3. levantamento" << endl;
    cout << ". Fechar" << endl;
    cout << "************************" << endl;
}

int main()
{
    //verificar saldo, deposito, levantamento,mostrar menu
    int option;
    double Saldo = 250;

    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            cout << "O Saldo da Conta e de " << Saldo << "kz " << endl;
            break;
        case 2:
            cout << "Deposito: ";
            double deposito;
            cin >> deposito;
            Saldo += deposito;
            break;
        case 3:
            cout << "Levantamento: ";
            double Levantamento;
            cin >> Levantamento;
            if (Levantamento <= Saldo)
                Saldo -= Levantamento;
            else
                cout << "Nao tem saldo suficiente na sua conta" << endl;
            break;
        }
    } while (option != 4);
    {
    }
    system("pause>0");
}
