#include<iostream>
using namespace std;
bool sorted(int n , int arr[]){
    if(n==1){
        return true;   //base condition as we are decreasing size at last size will be 1 if it is sorted
    }
    bool restArray = sorted(n-1,arr+1); //it means pointer of size of array-- and array++  //this is main part of recursion in this question
    if(arr[0]<arr[1] && restArray==1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
int n ;
cout<<"Enter size of array "<<endl;
cin>>n;
int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"array is sorted "<<sorted(n,arr);
return 0;
}