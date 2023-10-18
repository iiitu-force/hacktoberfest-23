#include<iostream>
using namespace std;
int power(int n, int p){
if(p==0){
    return 1;  //instead of zero 1 is returned because something multiplied by zero becomes zero
}
else{
    int prevPower = power(n,p-1);
    return n*prevPower;

}
}
int main(){
int n ,p;
cout<<"ENter number ";
cin>>n;
cout<<"Enter number by which it is raised to ";
cin>>p;
cout<<n<<" raised to power "<<p<<" is "<<power(n,p);
return 0;
}