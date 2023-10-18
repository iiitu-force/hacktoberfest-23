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
    for (int i= 1 ; i<=r; i++){
    for(int p=1; p<=c; p++){
    cout<<"*";
     }
    cout<<endl;
    }
    }


return 0;   
}