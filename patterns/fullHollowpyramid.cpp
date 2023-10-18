#include<iostream>
using namespace std;
int main(){
int n ;
cout<<"Enter a number ";
cin>>n;
for(int i=0; i<=n; i++){
    for (int j = 1; j<=n-i ; j++){
        cout<<" ";
    }
    for(int j =1;j<=i ; j++ ){
        if(j==1 || i==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
//       for(int j =i-1;j>=1 ; j--){
//         if(j==1 || i==n){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
    cout<<endl;
}
return 0;
}