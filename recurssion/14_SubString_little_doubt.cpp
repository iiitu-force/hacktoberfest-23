#include<iostream>
using namespace std;
void substr(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string ros=s.substr(1);
    substr(ros,ans);
    substr(ros,ans+ch); //one time add ch and one time not add i.e abc and c iff ab=ans and c =ch
}
int main(){
string s;
cout<<"Enter substring ";
cin>>s;
cout<<"All substrings are "<<endl;
substr(s,"");
return 0;
}