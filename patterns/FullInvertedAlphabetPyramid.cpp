#include <iostream>
using namespace std;


int main(){
char array[6] = {'A','B','C','D','E','F'};
for(int i=6; i>0; i--){
    for(int j=0; j<6-i; j++){
        cout<<" ";
    }
    for(int j=0; j<i; j++){
        cout<<array[j]<<" ";
  
    }
    cout<<endl;
}
return 0;   
}