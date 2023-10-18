#include<iostream>
using namespace std;
int sum(int n){  //recurssion decreases time complexity and increases space complexity
    if(n==0){
        return 0;
    }
    else{
        int prevSum = sum(n-1);
        return n + prevSum;
    }
}
int main(){
int n ;
cout<<"Enter values till when sum is required ";
cin>>n;
cout<<"sum till "<<n<<" is "<<sum(n)<<endl;
return 0;
}