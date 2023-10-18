//give a board of size 2*n count the number of ways to tile the given board using using tiles of size 2*1
#include<iostream>
using namespace std;
//its code is quiet similar to fibonacci
int tile(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tile(n-1) + tile(n-2); //n-1 for coloumn wise placement of tile as it reduce 1 coloumn and n-2 for horizontal as it reudce 2 coloumn
}
int main(){
int n ;
cout<<"Enter number of coloumns ";
cin>>n;
cout<<tile(n);
return 0;
}