#include <iostream>
using namespace std;

// it forms like mirror image so first we focus on upper part so that it become easy to code
int main(){
int n;
cout<<"Enter an number ";
cin>>n;
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    int space= 2*n -2*i;   //as number of spaces in first line is max. then it starts decreasing
    for(int j=1; j<=space; j++){
        cout<<" ";
    }
        for(int j=1; j<=i; j++){
        cout<<"*";
    }
   cout<<endl;
}
for(int i=n; i>=1; i--){ //to reverse the order
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    int space= 2*n -2*i;
    for(int j=1; j<=space; j++){
        cout<<" ";
    }
        for(int j=1; j<=i; j++){
        cout<<"*";
    }
   cout<<endl;
}


return 0;   
}