//find the number of ways in which n friends can remain single or can be paired up
#include<iostream>
using namespace std;
int friendsPair(int n){
    if(n==0 ||n==1 ||n==2){
        return n; //for 0 nothing can be done for 1 lone way leave it single , for 2 leave both single or pair with each other so two ways   
    }
        return friendsPair(n-1)  + friendsPair(n-2)*(n-1);  //if we are leaving single then ways to pair other is n-1 and if we pair it with someone then ways to pair other is pair(n-2)*n-1 we multiply by n-1 as for pairing the first person there are n-1 ways and in making it single we arer just leaving it

}
int main(){
int n ;
cout<<"Enter number of friends ";
cin>>n;
cout<<friendsPair(n);
return 0;
}