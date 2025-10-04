#include<iostream>
using namespace std;

int main(){
    int n, sum = 0, max = 0;
    int arr[2];
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[0]>>arr[1];
        sum+= -arr[0] + arr[1];
        if(sum >= max) {
            max = sum;
        }
    }
    cout<<max;
return 0;
}