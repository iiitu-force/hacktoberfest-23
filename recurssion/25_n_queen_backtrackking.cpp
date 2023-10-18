//given a chess board with n*n dimension and queens place them like none of them attack each other
#include<iostream>
using namespace std;
bool isSafe(int** arr,int x, int y, int n){
    for(int row=0;row<x;row++){ //for vertically checking
        if(arr[row][y]==1){
            return false;
        }
    }
    int row=x;
    int col =y;
    while(row>=0 && col>=0){  //for left diagonal
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col =y;
    while(row>=0 && col<n){  //for right diagonal
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int** arr, int x,int n){  //we are not taking y as we will enter in next row once we place our queen in any row
     if(x>=n){
        return true;
     }
     for(int col=0;col<n;col++){
        if(isSafe(arr,x, col,n)){
            arr[x][col]=1;
            if(nQueen(arr,x+1,n)){  //to check if in next row we are able to place any queen  
                return true;
            }
            else{
                arr[x][col]=0; //backtracking
            }
        }
     }
    return false; //if we are unable to place our queen at any col in row
}
int main(){
int n ;
cin>>n;
int** arr= new int*[n];  //we are using dynamic allocation as we want to get input from the function 
for(int i=0;i<n;i++){    
    arr[i]= new int[n];
    for(int j=0;j<n;j++){
        arr[i][j]=0;
    }
}
if(nQueen(arr,0,n)){ ///printing solArr
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
cout<<endl;
}
}
return 0;
}