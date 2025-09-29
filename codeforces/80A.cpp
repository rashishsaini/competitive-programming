#include<iostream>
using namespace std;
bool ifprime(int n)
{
    for(int i =2; i< n; i++) {
       if( n%i == 0)
        return 0;
    }
 return 1;
}
int main(){
    long long n,m;
    cin>>n;
    cin>>m;
    if(ifprime(m)) {
    for(int i = m-1 ; i>n; i--)
    {
        if(ifprime(i)) {
        cout<<"NO";
        return 0;
        }

    }
            cout<<"YES";
    }
    else cout<<"NO";

return 0;
}