#include<iostream>
using namespace std;

int main(){
    long long int n,  count=0;
    cin>>n;
    for(int i = 0 ; n > 0 ; i++)
    {
       int x = n%10;
        if(x ==4 || x== 7) count++;
        n/=10;
    }
    if(count == 4 || count == 7) 
    cout<<"YES";
    else cout<<"NO";
return 0;
}