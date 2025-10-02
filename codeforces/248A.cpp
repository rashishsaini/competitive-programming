#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
        int n;
    cin>>n;
    vector<vector<int>> cupb(n, vector<int>(2));
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<2; j++){
            cin>>cupb[i][j];
        }
    }
    int countM_i=0;
           int countM_j=0;

   for(int i= 0 ; i < n; i++){
    countM_i += (cupb[i][0] == 1) ;
        countM_j += (cupb[i][1] == 1) ;
   }

cout<<(min(countM_i, n - countM_i) + min(countM_j, n - countM_j));

return 0;
}