#include<iostream>
#include<string>
using namespace std;

int main(){
string s, n;
cin>>s;
    for(int i = 0; i< s.length(); i++){
    if ( s[i] == '.' )
        n += "0";
    else if ( s[i] == '-' && s[i+1] == '.' ){ 
        n += "1";
        i++;
    }
    else if ( s[i] == '-' && s[i+1] == '-' ){
        n += "2";
        i++;
    }
    }
cout<<n;
    
    
    return 0;
}