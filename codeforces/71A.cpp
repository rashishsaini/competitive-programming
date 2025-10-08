#include<iostream>
using namespace std;

int main(){
    string s; int count; int t;
    cin>>t;
    while(t--){
        count=0;
        cin>>s;
        for(char c: s){
            count++;
        }
        if(count <=10) {
            cout<<s<<endl;
            continue;
        }

        cout<<s[0]<<(count - 2)<<s[s.length()-1]<<endl;



    }    
return 0;
}