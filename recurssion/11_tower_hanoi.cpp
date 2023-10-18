#include<iostream>
using namespace std;
void tower(int n, char src,char helpr, char destn){
    if(n==0){
        return;
    }
    tower(n-1,src,destn,helpr);
    cout<<"move from "<<src<<" to "<<destn<<endl;
    tower(n-1,helpr,src,destn);
}
int main(){
int n ;
char src,helper,destn;
cout<<"Enter number of rods in tower of hanoi ";
cin>>n;
cout<<"Enter source of rods in tower of hanoi ";
cin>>src;
cout<<"Enter helper of rods in tower of hanoi ";
cin>>helper;
cout<<"Enter destn of rods in tower of hanoi ";
cin>>destn;
cout<<"way of forming tower of hanoi "<<endl;
tower(n,src,helper,destn);
return 0;
}