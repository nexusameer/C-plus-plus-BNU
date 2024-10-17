#include <iostream>
using namespace std;

const int row = 3;
const int col = 3;

void displayBoard(char board[][col]){
    cout<<"Tic Tac Toe\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<board[i][j]<<" ";
            if(j<2){
                cout<<'|';
            }

        }
        cout<<endl;
        if(i<2){
        cout<<'_'<<endl;
        }
    }

}

bool checkBoard(char board[][col],int r,int c, char selected_player){
    if(board[r][c] == ' '){
        board[r][c] = selected_player;
        return true;
    }else{
        cout<<"Invalid Entry";
        return false;
    }
}

bool checkWin(char board[][col]){
    for(int i=0;i<row;i++){
        int j=0;
            if(board[i][j]== board[i][j+1] && board[i][j+1] == board[i][j+2]);
            return true;
    }

    for(int j=0;j<col;j++){
            int i=0;
            if(board[i][j]== board[i+1][j] && board[i+1][j] == board[i+2][j]);
            return true;
    }
    int i =0,j=0;
    if(board[i][j]== board[i+1][j+1] && board[i+1][j+1] == board[i+2][j+2]){
        return true;
    }
    int i = 0,j=2;
     if(board[i][j]== board[i+1][j-1] && board[i+1][j-1] == board[i+2][j-2]){
        return true;
    }
    return false;
}



int main(){

    char board[row][col] = {{' ',' ',' '},
                            {' ',' ',' '},
                            {' ',' ',' '}};
    displayBoard(board);
    string playerOne = "Zain";
    string playerTwo = "Ali";
    char selected_player = 'x';
    bool gameOver = false;
    while(!gameOver){
        
    int selected_row,selected_col;
    if(selected_player == 'X'){
        cout<<playerOne<<" Enter row and Column"<<endl;
        cin>>selected_row>>selected_col;
        cout<<selected_row<<selected_col;
    }
    checkBoard( board,selected_row,selected_col,selected_player);
    if(checkWin(board)){
        if(selected_player == 'X'){

        cout<<playerOne<<" is Winner"<<endl;
        gameOver = true;
        }
    }else{
        cout<<playerTwo<<" is Winner"<<endl;    
        gameOver = true;
    };
    // checkDraw(board);
    displayBoard(board);
    selected_player = 'O';
    if(selected_player == 'X'){
        selected_player = 'O';
    }else{
        selected_player == 'X';
    }

    }




  
    return 0;
}