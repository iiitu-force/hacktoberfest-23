//put n items with given weight and value in knapsack(gathri) of capacity W to get maximum total value in knapsack
#include<iostream>
using namespace std;
int knapsack(int value[],int wt[], int n , int cap){
    if(n==0 || cap==0){
        return 0;
    }
    if(wt[n-1]>cap){
        knapsack(value,wt,n-1,cap);
    }
      return max(knapsack(value,wt,n-1,cap-wt[n-1])+value[n-1] ,knapsack(value,wt,n-1,cap));
}
int main(){
int wt[]={10,20,30} ;
int value[]={100,50,150};
int cap =50;
cout<<knapsack(value,wt,3,cap);
return 0;
}