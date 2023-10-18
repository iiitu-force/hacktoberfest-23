//backtrack when found that our constraints are not matching or we can't move forward or there is no benefit of moving forward
//here we solve rat in a maze given a 2d matrix with combination of 0,1 rat can mov e to the position only where there is 1,in output denote the location of path as 1 and other as 0
#include<iostream>
using namespace std;
bool isSafe(int** arr,int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){  //finding that moving somewhere is safe or not
        return true;
    }
    return false;
}

bool ratInMaze(int** arr,int x, int y, int n, int** solArr){
    if(x==n-1 && y==n-1){
        solArr[x][y]=1;
        return true;
    }
    if (isSafe(arr,x,y,n)){
        solArr[x][y]=1; //inserting value 1 where rat is able to go
        if (ratInMaze(arr,x+1,y,n,solArr)){
            return true;
        }
        if (ratInMaze(arr,x,y+1,n,solArr)){
            return true;
        }
        else{
            solArr[x][y]=0;
            return false;
        }
    }
    return false;
}

int main(){
int n ;
cout<<"Enter number of rows or coloumns of square matrix";
cin>>n;
int** arr= new int*[n];  //we are using dynamic allocation as we want to get input from the function 
int** solArr= new int*[n];
for(int i=0;i<n;i++){
    arr[i]= new int[n];
}
for(int i=0;i<n;i++){
    solArr[i]= new int[n];
}
for(int i=0;i<n;i++){    
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){ //initializing solArr woth 0 at every position
    for(int j=0;j<n;j++){
        solArr[i][j]=0;
    }
}
if(ratInMaze(arr,0,0,n,solArr)){ ///printing solArr
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<solArr[i][j]<<" ";
    }
cout<<endl;
}
}
return 0;
}