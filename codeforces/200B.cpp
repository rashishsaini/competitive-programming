#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(){
int n;
cin >> n;
vector<int> v(n);
for(int i = 0; i < n; i++) {
    cin >> v[i];
}
long double sum = accumulate(v.begin(), v.end(), 0);
cout<<((sum/100)/n)*100;

return 0;
}