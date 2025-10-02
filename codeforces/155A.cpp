#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++) {
        cin>>a[i];
    }
    int count = 0;
    int max = a[0];
    int min = a[0];
    for(int i= 0 ; i < n; i++){
        if(a[i] > max){
            max = a[i];
            count++;
        }
        if(a[i] < min){
            min = a[i];
            count++;
        }
    }
    cout<<count;
return 0;
}