#include<iostream>
#include<string>
using namespace std;
void duplicate(string s){   //my code
    if(s.length()==0){
        return;
    }
    string restString;
    if(s[0]==s[1]){
        restString = s.substr(1);
    }
    else{
        cout<<s[0];
        restString = s.substr(1);
    }
    duplicate(restString);
}

string duplicate2(string s){   //apni kaksha code
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans = duplicate2(s.substr(1));
    if(ch==ans[0]){
        return ans;    //if ch is included then remove ch i.ee return only ans
    }
        return (ch+ans);  //ch is not same then return ch + ans i.e. print ch

}
int main(){
string s;
cout<<"Enter string ";
cin>>s;
cout<<"string after removing duplicates is ";
duplicate(s);
cout<<endl;
cout<<"string after removing duplicates is "<<duplicate2(s)<<endl;
;

return 0;
}