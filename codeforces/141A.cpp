#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s1, s2, s3;
    vector<char> v;
       vector<char> v2; 
    cin>>s1>>s2>>s3;
    if(s1.length()+ s2.length() != s3.length() ) cout<<"NO";
    else{

        for(char c : s1){v.push_back(c);}
        for(char c : s2){v.push_back(c);}
        for(char c : s3){v2.push_back(c);}
        sort(v.begin(), v.end());
                sort(v2.begin(), v2.end());


        for(int i = 0; i<s3.length(); i++) {
            if(v[i] == v2[i]) {
                continue;
            }
            else {cout<<"NO"; return 0;} 
        }
        cout<<"YES";

    }


   return 0;
}