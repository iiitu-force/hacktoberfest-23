#include <iostream>
using namespace std;


int main(){

    int r, c ;
    cout<<"Enter row and coloumn ";
    cin>> r >> c;
    if(r==c){
        cout<<"Number of rows and coloumn should not be equal as it forms square."<<endl;
    }
else{
    for(int i=1; i<=r ; i++){
        for(int j=1; j<=c; j++){
            if(j==1 || j==c || i==1 || i==r){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
}
return 0;   
}