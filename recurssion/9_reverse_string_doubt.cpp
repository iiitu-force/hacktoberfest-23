#include<iostream>
#include<string>
using namespace std;
void reverse(string s){   //apni kaksha code
    if(s.length()==0){
        return ;      //base case
    }
    else{
        string restString = s.substr(1); //it means string started after length 1 is passed //if it repeats then length of string decreases by 1 in each case
        reverse(restString); //we call restString multiple time so string of lower length passed each time;
        cout<<s[0]; //now we print becasue we want reversed string if we need same string then we print before calling recursive fn
    }
}
void reverse2(string s,int n){  //my code
    if(n==0){
        return ;      //base case
    }
    else{
        cout<<s[n]; //now we print becasue we want reversed string if we need same string then we print after calling recursive fn
        reverse2(s,n-1); 
    }
}
int main(){
string s;
int n;
n=s.length();
cout<<"Enter your string ";
cin>>s;
cout<<"reversed string is ";
reverse(s);
cout<<endl;

cout<<"reversed string is ";
reverse2(s,n);
return 0;
}