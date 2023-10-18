#include <iostream>
using namespace std;


int main(){
int n;
cout<<"Enter an number ";
cin>>n;
//to increase number of row
    for(int i=1; i<=n ; i++){
        //to print values in column
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

return 0;   
}