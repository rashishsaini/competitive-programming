#include<iostream>
using namespace std;
void flip(int& n){
    if ( n == 0 )
    n = 1;
    else if ( n == 1 )
    n=0;
}
int main(){
  int x1=1, x2=1, x3=1, y1=1, y2=1, y3=1, z1=1, z2=1, z3=1;
  for(int j=1; j<=3; j++){
    for(int i=1; i<=3; i++){
        int a;
        cin>>a;
        for(int k=1; k<=a; k++){
            if ( j == 1 ){
                if ( i == 1 ){
                    flip(x1);
                    flip(x2);
                    flip(y1);
                }
                else if ( i == 2 ){
                    flip(x1);
                    flip(x2);
                    flip(x3);
                    flip(y2);
                }
                else if ( i == 3 ){
                    flip(x2);
                    flip(x3);
                    flip(y3);
                }
            }
            else if ( j == 2 ){
                if ( i == 1 ){
                    flip(y1);
                    flip(y2);
                    flip(x1);
                    flip(z1);
                }
                else if ( i == 2 ){
                    flip(y1);
                    flip(y2);
                    flip(y3);
                    flip(x2);
                    flip(z2);
                }
                else if ( i == 3 ){
                    flip(y2);
                    flip(y3);
                    flip(x3);
                    flip(z3);
                }
            }
            else if ( j == 3 ){
                if ( i == 1 ){
                    flip(z1);
                    flip(z2);
                    flip(y1);
                }
                else if ( i == 2 ){
                    flip(z1);
                    flip(z2);
                    flip(z3);
                    flip(y2);
                }
                else if ( i == 3 ){
                    flip(z2);
                    flip(z3);
                    flip(y3);
                }
            }
        }
  
    }
  }
    cout<<x1<<x2<<x3<<endl;
    cout<<y1<<y2<<y3<<endl;
    cout<<z1<<z2<<z3<<endl;
return 0;
}