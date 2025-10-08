#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
vector<long long int> arr(4); long long int count = 0;

    for(int i = 0 ; i<4; i++){
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());

        for(int i = 0 ; i<3; i++){
        if(arr[i]==arr[i+1]) count++;
    }

    cout<<count;

return 0;
}
