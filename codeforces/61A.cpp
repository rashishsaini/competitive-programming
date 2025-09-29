#include<iostream>
#include<cstring>
using namespace std;

int main(){
string a,b,c;
cin>>a>>b;
for(int i = 0; i < a.length() ; i++)
{
    int ai = a[i] - '0';
    int bi = b[i] - '0';
    int ci = ai^bi;
    c += ci + '0' ;
}
cout<<c;
return 0;
}