#include<iostream>
#include<string>
using namespace std;

void replace(string s){  //my code  //apni kaksha have same code
if(s.length()==0){
    return;
}
else{
    string restString;
    if(s[0]=='p' && s[1]=='i'){
        cout<<3.14;
       restString = s.substr(2);
    }
    else{
       cout<<s[0];
       restString = s.substr(1);
    }
    replace(restString);
}
}


int main(){
string s;
cout<<"Enter your string ";
cin>>s;
cout<<"replaced string is ";
replace(s);
return 0;
}