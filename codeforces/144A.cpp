#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int max = arr[0], min = arr[0];

        for(int i = 0; i<n; i++)
    {
        if(arr[i]>=max) {max = arr[i]; }
        if(arr[i]<=min) {min= arr[i]; b = i; }
    }
            for(int i = 0; i<n; i++)
    {
        if(arr[i]==max) {a=i; break; }

    }

                if(a<b) {
                    int y = a + n -1 -b;
                    cout<<y;
                }
                    else if(a>b) {
                    int y = a + n -2 -b;
                    cout<<y;
                }

return 0;
}