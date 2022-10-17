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
// These 2 function togrthrr will return the best possible move for the player
Move retmove(char board[3][3],int i,int j){
    Move op1=isrow(board,i,j);
    Move op2=iscol(board,i,j);
    Move op3=iscross(board,i,j);
    if(op1.status==1){
        return op1;
    }
    else if(op2.status==1){
        return op2;
    }
    else if(op3.status==1){
        return op3;
    }
    else{
        return op1;
    }
}

Move findBestMove(char board[3][3])
{
    Move arr[3],ans[3];
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
             if(board[i][j]=='-'){
                arr[count].row = i;
                arr[count].col=j;
                count++;
             }
      }
    }


    for(int k=0;k<count;k++){
         int i=arr[count].row;
         int j=arr[count].col;
         ans[k] = retmove(board,i,j);
    }

    for(int m=0;m<count;m++){
        if(ans[m].status==1){
            return ans[m];
        }
    }
    return ans[0];

    // cout<<"count is: "<<count<<"\n";
}

// Driver code
int main()
{
    char board[3][3] =
    {
        { 'o', '-', 'x' },
        { 'x', '-', 'x' },
        { 'o', 'o', '-' }
    };
    cout<<"The game till now is given as follows\n";
    Move bestMove = findBestMove(board);
    // Move 
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