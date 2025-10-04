#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
for(int i =0; i<t; i++){
    int n;
    cin>>n;
    int arr[n];
    for(int j =0; j<n; j++){
        cin>>arr[j];
    }
    int count = 0;
 for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
        count++;
        }
    }
    cout<<(2*(count) - 1)<<endl;


}
return 0;
}

