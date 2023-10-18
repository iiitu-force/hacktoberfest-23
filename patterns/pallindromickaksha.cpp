#include <iostream>
using namespace std;


int main(){
int n, k;
cout<<"Enter an number ";
cin>>n;
for(int i=1; i<=n; i++){
    int j;
    for(j=1;j<=n-i; j++){
        cout<<" ";
    }
     k=i;
     //we are leaving blank in initialistion part of "j" so that our loop started from where it ended
     for(;j<=n;j++){
         cout<<k--<<"";
     }
    
        int k=2;
    for(;j<=n+i-1;j++){
        cout<< k++ <<"";
    }

    cout<<endl;
    }

    


return 0;   
}