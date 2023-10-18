#include <iostream>
using namespace std;


int main(){
int n, k;
cout<<"Enter an number ";
cin>>n;
for(int i=1; i<=n; i++){
    for(int j=1;j<=n-i; j++){
        cout<<" ";
    }
    for(int j=i;j>=1;j--){

        cout<<j;
    }
    for(int j=2; j<=i; j++){
        //  int k= 1;
        //  k++;
        cout<<j;
    }

    cout<<endl;
    }
return 0;   
}