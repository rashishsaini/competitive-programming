#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%3 == 0)
        {cout<<0<<endl;}
        else
        cout<<(3 - n%3)<<endl;
    }
return 0;
}