#include <iostream>
using namespace std;


int main(){
int n;
cout<<"Enter an number ";
cin>>n;  //to increase number of row
     for(int i=1; i<=n ; i++){
       //we need to print something whether it is zero or *
        for(int j=1; j<=n; j++){
           if(j<=n-i){
               cout<<" ";
           }
           else{
               cout<<"*";
           }
        }
        cout<<endl;
    }

return 0;   
}