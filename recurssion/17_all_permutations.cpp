#include<iostream>
using namespace std;
void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
    }
    for(int i=0;i<s.length();i++){
       char ch=s[i];
       string ros =s.substr(0,i)+s.substr(i+1); //it means our substr starts with 0 and end at 0+i + string starts with i+1 //basically it gives us string after removing the ith charecter
       permutation(ros,ch+ans);

    }
}
int main(){
string s;
cout<<"Enter your string ";
cin>>s;
cout<<"All permutation of string is "<<endl;
permutation(s,"");
return 0;
}