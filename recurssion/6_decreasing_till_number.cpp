#include<iostream>
using namespace std;
void dec(int n){
    if(n==0){
        return ;
    }
    else{
        cout<<n<<" ";
        dec(n-1);
    }
}
int main(){
int n ;
cout<<"Enter a number till when number is to be printed ";
cin>>n;
cout<<"Number till "<<n<<" in decreasing order are ";
dec(n);
return 0;
}