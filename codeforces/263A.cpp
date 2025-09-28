#include<iostream>

using namespace std;

int main(){
int arr;
int xf,yf;
for(int j = 1; j<=5; j++){
   for(int i = 1; i<=5; i++){
       cin>>arr;
       if(arr == 1){
        xf=i; yf=j;
       }
   }
   
}
 cout<<abs(xf-3)+abs(yf-3)<<endl;

return 0;   
}