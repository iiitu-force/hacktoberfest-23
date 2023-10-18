#include<iostream>
using namespace std;
void inc(int n){
    if(n==0){
        return ;
    }
    else{
        inc(n-1);  //first call aal then print from lower most //try to visualise it in stack //power of recursion
        cout<<n<<" ";
    }
}
int main(){
int n ;
cout<<"Enter a number till when number is to be printed ";
cin>>n;
cout<<"Number till "<<n<<" in increasing order are ";
inc(n);
return 0;
}