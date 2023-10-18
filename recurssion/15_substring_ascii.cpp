#include<iostream>
using namespace std;
//total of three recursive call //one time just ans one time add charecter //one time add ascii values
void substrASCII(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    int d= ch;
    string ros=s.substr(1);
    substrASCII(ros,ans);
    substrASCII(ros,ans+ch); //one time add ch and one time not add i.e abc and c iff ab=ans and c =ch
    substrASCII(ros,ans+to_string(d)); //one time add d and one time not add i.e ab67 and ab iff ab=ans and d = ascii value of ch
}
int main(){
string s;
cout<<"Enter substring ";
cin>>s;
cout<<"All substrings are "<<endl;
substrASCII(s,"");
return 0;
}