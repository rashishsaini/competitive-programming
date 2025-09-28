#include<iostream>
#include<cctype>
using namespace std;

int main(){
string s,f;
int cu=0, cl=0;
cin>>s;
for(char c : s) {
if(isupper(c)) cu++ ;
else if(islower(c)) cl++ ;
}

if(cu>cl)
{
    for(char c : s) {
if(islower(c)) f += toupper(c) ;
else f += c;
}
}

else {
         for(char c : s) {
if(isupper(c)) f += tolower(c) ;
else f += c;
}
}
cout<<f;
return 0;
}