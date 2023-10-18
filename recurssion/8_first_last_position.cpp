#include<iostream>
using namespace std;
//always try to visualise when to call recursive fn first and then print and vice versa
int first(int arr[],int n,int i, int key){
    if (i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;   //it firstly returniong the value and checking it then calling the function
    }
    return first(arr,n,i+1,key);
}
int last(int arr[],int n,int i, int key){   //first method //my method
    if (i==0){
        return -1;
    }
    if(arr[i]==key){
        return i;  
    }
    return last(arr,n,i-1,key);
}
int lastk(int arr[],int n,int i, int key){   //second method //apni kaksha method
    if (i==n){
        return -1;
    }
    int restArray = lastk(arr,n,i+1,key);  //it firstly calls the all array position and then try to print //power of recursion  //try to visualise in stack
    if(restArray != -1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    else{
        return -1;
    }

}
int main(){
int n ;
cout<<"Enter size of array ";
cin>>n;
int arr[n];
for(int i=0 ; i<n;i++){
    cin>>arr[i];
}
int key;
cout<<"Enter value to check ";
cin>>key;
cout<<"first occurence of " <<key<<" is "<<first(arr, n,0,key)<<endl;
cout<<"last occurence of " <<key<<" is "<<last(arr, n,n,key)<<endl;
cout<<"last occurence of " <<key<<" is "<<lastk(arr, n,0,key);
return 0;
}