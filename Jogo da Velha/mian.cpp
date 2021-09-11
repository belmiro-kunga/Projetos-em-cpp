#include <iostream>
#include <conio.h>

using namespace std;

void printInputMatrix();
void printBoard();

char board[3][3] = {' ',' ',' ',
                   ' ',' ',' ',
                   ' ',' ',' '};
int turn = 1; //1-Jogador 1| 0-jogador 2
char mark = '0'; // 4.5   0-jogador 1 | x-jogador 2
int input;
int main(){
    //int won = 0;
    //int validInput = 0;
    for(int i=0; i<9; i++){
        system("cls");
        printBoard();
        if(turn) cout<<"Vez do jogador 1 (Symbol: 0)"<<endl;
        else cout<<"Vez do jogador 2 (Symbol: x)"<<endl;
        printInputMatrix();
        cout<<"insira a entrada da matriz: ";
        cin>>input;
        while (input<0 || input>9){
            cout<<"Entrada Invalida. Por favor, insira a entrada novamente: ";
            cin>>input;
        if(turn) mark = '0';
        else mark = 'x';

        turn = !turn;
        }
        
    }
    return 0;
}
void printInputMatrix(){
    cout<<endl<<endl<<"Input Matrix"<<endl;
    cout<<" 1 | 2 | 3 "<<endl;
    cout<<" 4 | 5 | 6 "<<endl;
    cout<<" 7 | 8 | 9 "<<endl;
    void printBoard();
    cout<<" "<<board[0][0]<<" | "<<board [0][1]<<" | " <<board[0][2]<<" "<<endl;
    cout<<"------------"<<endl;
    cout<<" "<<board[1][0]<<" | "<<board [1][1]<<" | " <<board[1][2]<<" "<<endl;
    cout<<"------------"<<endl;
    cout<<" "<<board[2][0]<<" | "<<board [2][1]<<" | " <<board[2][2]<<" "<<endl;

}
