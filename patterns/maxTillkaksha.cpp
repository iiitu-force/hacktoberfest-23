#include<iostream>
using namespace std;


int main(){
int n;
cout<<"Enter size of your array ";
cin>>n;
int array[n];
cout<<"Enter values of your array ";
for(int i=0;i<n;i++){
    cin>>array[i];
}
int mx = -1999;
for (int i=0;i<n;i++){
    mx= max(array[i], mx);
    cout<<mx<<endl;
}
    
return 0;
}