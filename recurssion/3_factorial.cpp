#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        int prevFact = fact(n-1);
        return n*prevFact;
    }
}
int main(){
int n ;
cout<<"Enter a number to find its factorial ";
cin>>n;
cout<<"factorail of number "<<n<<" is "<<fact(n)<<endl;
return 0;
}