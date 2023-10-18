#include<iostream>
using namespace std;
string keyPadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//to convert charecter into an ascii we subtract it with '0 i.e ch-'0
void words(string s, string ans){
if(s.length()==0){
    cout<<ans<<endl;
    return;
}
    char ch=s[0];
    string code = keyPadArr[ch-'0']; //it gets the keypad value
    string ros = s.substr(1);
    for(int i=0;i<code.length();i++){
        words(ros,ans+code[i]);
    }
}
int main(){
string s;
cout<<"Enter phone digit i.e. enter an integer ranigning from 0 to 9 ";
cin>>s;
cout<<"All possible words are "<<endl;
words(s,"");
return 0;
}