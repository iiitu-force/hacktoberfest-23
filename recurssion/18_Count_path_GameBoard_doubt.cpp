#include<iostream>
using namespace std;
int countPath(int start , int end){
    if(start==end){
        return 1;
    }
    else if(start>end){
        return 0;
    }

        int count =0;
        for(int i=1;i<=6;i++){
            //i<=6 because we have 6 faces in dice
            count = count + countPath(start+i,end);
    }
    return(count);

}
int main(){
int n,m ;
cout<<"Enter starting and ending point ";
cin>>n>>m;
cout<<"Number of path is "<<countPath(n,m);
return 0;
}