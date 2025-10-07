#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
string s;
vector<int> v;
cin>>s;
for(char c : s){
    if(c == '1') v.push_back(1);
    else if(c == '2') v.push_back(2);
    else if(c=='3') v.push_back(3);
}
sort(v.begin(), v.end());
int c = 0;
for(int i : v){
    cout<<i;
    c++;
    if(c == v.size()) {continue;}
    cout<<"+";
}
    
return 0;
}