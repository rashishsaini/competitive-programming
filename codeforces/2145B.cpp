#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main(){
    long long int t,n,k;
            long long int count0, count1, count2;
    cin>>t;
            vector<char> output;
                    string s;
    while(t--){
        cin>>n>>k;

 count0 = 0; count1 = 0; count2 = 0;


            cin>>s;
            for(char ch: s) {
            if(ch == '0') count0++;
            else if(ch=='1') count1++;
            else if (ch=='2') count2++; }

                for(int i =1; i<=n; i++){

                    if(i <= count0 || i> n - count1) {
                        output.push_back('-');
                    }
                   else if (i > count0 + count2 && i <= n - count1 - count2) {
                    output.push_back('+');
                    } 
                    else {
                        if(n -k <= 0) {
                            output.push_back('-');
                            continue;
                        }

                    output.push_back('?');
                    }
                    

                }
                for(int i = 0; i<output.size(); i++) {
                cout<< output[i] ;}
    
            cout<<endl;
            output.clear();
        s.clear();
}
return 0;
}