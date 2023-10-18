#include<iostream>
using namespace std;
void movex(string s){    //my code
    if(s.length()==0){
        return;
    }
    else{
        string restString;
        if(s[0]=='x'){
            restString = s.substr(1);   //needed to print all x in end so call recursive fn first then print
            movex(restString);
            cout<<s[0];
        }
        else{
            cout<<s[0];              //needed to print all x in end so call print firsth then call recursive fn;
            restString = s.substr(1);
            movex(restString);            
        }
    }
}

string movex2(string s){    //apni kaksha code
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = movex2(s.substr(1));
    if(ch=='x'){
        return (ans+ch);    //we want x in last so we concat it like this
    }
    return (ch+ans);       //we want x in last so we concat it like this

}
int main(){
string s;
cout<<"Enter string ";
cin>>s;
cout<<"string after moving all x to end is ";
movex(s);
cout<<endl;
cout<<"string after moving all x to end is "<<movex2(s);
return 0;
}