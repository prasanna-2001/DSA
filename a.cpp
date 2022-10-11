#include<bits/stdc++.h>
using namespace std;

struct Move
{
    int row, col,status=0;
};


Move isrow(char board[3][3],int i,int j){
    Move ans;
    if(j==0){
        if('x'==board[i][j+1] && 'x'==board[i][j+2]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    if(j==1){
        if('x'==board[i][j+1] && 'x'==board[i][j-1]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    if(j==2){
        if('x'==board[i][j-1] && 'x'==board[i][j-2]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    return ans;
}
Move iscol(char board[3][3],int i,int j){
    Move ans;
    if(i==0){
        if('x'==board[i+1][j] && 'x'==board[i+2][j]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    if(i==1){
        if('x'==board[i+1][j] && 'x'==board[i-1][j]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    if(i==2){
        if('x'==board[i-1][j] && 'x'==board[i-2][j]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    return ans;
}
Move iscross(char board[3][3],int i,int j){
    Move ans;
    if(i==0 &&j==0){
        if('x'==board[i+1][j+1] && 'x'==board[i+2][j+2]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    else if(i==0 &&j==2){
        
        if('x'==board[i+1][j-1] && 'x'==board[i+2][j-2]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    
    }
    
    //dw
    else if(i==2 &&j==0){
        if('x'==board[i-1][j+1] && 'x'==board[i-2][j+2]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    else if(i==2 &&j==2){
        
        if('x'==board[i-1][j-1] && 'x'==board[i-2][j-2]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    
    }
    else if(i==1 || j==1){
        if('x'==board[i+1][j-1] && 'x'==board[i-1][j+1]){
            ans.row =i;
            ans.col=j;
            ans.status=1;
        }
        else{
            ans.row =i;
            ans.col=j;
            ans.status=0;
        }
    }
    // else{
    //         ans.row =i;
    //         ans.col=j;
    //         ans.status=0;
    //     }
    return ans;
}

// This will return the best possible move for the player
Move findBestMove(char board[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             if(board[i][j]=='-'){
             Move op1=isrow(board,i,j);
             Move op2=iscol(board,i,j);
             Move op3=iscross(board,i,j);
            if(op1.status==1){
                return op1;
            }
            else if(op1.status==1){
                return op1;
            }
            else if(op1.status==1){
                return op1;
            }
            else{
                return op1;
            }
             }
      }
    }
}

// Driver code
int main()
{
    char board[3][3] =
    {
        { 'o', '-', 'x' },
        { 'x', '-', 'x' },
        { 'o', 'o', 'x' }
    };
    cout<<"The game till now is given as follows\n";
    Move bestMove = findBestMove(board);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             cout<<board[i][j]<<"\t";
       }
    cout<<"\n";
    }
    printf("The Optimal Move is :\n");
    printf("ROW: %d COL: %d\n\n", bestMove.row,bestMove.col );
    return 0;
}