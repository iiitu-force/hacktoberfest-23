#include <iostream>
using namespace std;


int main(){
    int n ;
    cout<<"Enter an number ";
    cin>> n;
        //to decrease number of * printed
    for(int i=n; i>=1 ; i--){
        //to increase number of row
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }


return 0;   
}