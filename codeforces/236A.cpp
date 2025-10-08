#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    vector<char> v;
    cin>>s;
    for(char c: s){
        sort(v.begin(), v.end());
        if(binary_search(v.begin(), v.end(), c)) continue;
        v.push_back(c);
    }
    if(v.size()%2 ==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
return 0;
}