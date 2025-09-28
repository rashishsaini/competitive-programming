#include<iostream>
using namespace std;
bool ifdistinct(int n) {

  if (  n%10 == (n/10)%10 || n%10 == (n/100)%10 || (n/10)%10 == (n/100)%10 || n%10 == (n/1000) || (n/10)%10 == (n/1000) || (n/100)%10 == (n/1000) )
    return false;

    else return true;

}
int main(){
    long long int n, nf;
    cin>>n;
    nf=n;
    do {
        nf++;
        if (ifdistinct(nf)) {
          cout<<nf;
          return 0;
        }

    }  while(nf > n);
return 0;
}