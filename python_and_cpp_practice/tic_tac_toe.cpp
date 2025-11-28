#include<bits/stdc++.h>
using namespace std;


void displayboard(int board[3][3]){
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==-1){
                cout<<"_ ";
            }else{
                cout<<board[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int checkWinner(int board[3][3]) {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != -1)
            return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != -1)
            return board[0][i];
    }
   
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != -1)
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != -1)
        return board[0][2];

    return -1; 
}
    


int main(){
    int board[3][3]={{-1,-1,-1},
                     {-1,-1,-1},
                     {-1,-1,-1}};
    int r=0,c=0, ttmoves=0,player=1;
    while (ttmoves<9)
    {
        displayboard(board);
        cout<<"player "<<player<<"turn\n";
        cout<<"where do you want to place your mark (row and column): \n";
        cin>>r>>c;
        r-=1,c-=1;
        if(r<0 ||r>2 ||c<0 ||c>2){
            cout<<"Invalid position! Try again.\n";
            continue;
        }
        if(board[r][c]!=-1){
            cout<<"place has been filled choose another\n";
            continue;
        }
        board[r][c]=player;
        ttmoves++;

         int winner = checkWinner(board);
        if (winner != -1) {
            displayboard(board);
            cout << "\n Player " << winner << " is winner \n";
            return 0;
        }

        
        player = (player == 1) ? 0 : 1;
    }

    displayboard(board);
    cout << "\nIt's a draw!\n";
    return 0;

    
    
    // for (int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         displayboard(board);
    //         cout<<"where do you want to place your mark (row and column): \n";
    //         cin>>r>>c;
    //         if(board[r][c]!=-1){
    //             cout<<"place has been filled choose another";
                
    //         }
    //         cout<<"Enter your mark(1,0):";
            
    //         cin>>board[r][c];
    //     }
    // }   
    // // loop to find the winner
    
    // for(int i=0;i<3;i++){
    //     if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=-1){
    //         cout<<"winner is:"<<board[i][0]<<endl;
    //     }
    //     if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=-1){
    //         cout<<"winner is:"<<board[0][i]<<endl;
    //     }
    //     if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=-1){
    //         cout<<"winner is:"<<board[0][0]<<endl;
    //     }
    //     if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=-1){
    //         cout<<"winner is:"<<board[0][2]<<endl;
    //     }
        
    // }


    // // for (int i=0;i<3;i++){
    // //     for(int j=0;j<3;j++){
    // //         cout<<"winner is:";
            
    // //     }
    // // }

    // return 0;
}