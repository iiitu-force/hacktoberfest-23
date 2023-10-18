#include<iostream>
using namespace std;
int fibe(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibe(n-1) + fibe(n-2);
    }
}
int main(){
int n ;
cout<<"Enter an number to print its fibenaci number ";
cin>>n;
cout<<n<<" fibenaci number "<<fibe(n);
return 0;
}