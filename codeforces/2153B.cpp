#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        bool bad = true;
 
        for (int i = 0; i < 63; i++) {
            int rem1 = (a >> i) & 1;
            int rem2 = (b >> i) & 1;
            int rem3 = (c >> i) & 1;
            if (rem1 + rem2 + rem3 == 2) {
                cout << "NO\n";
                bad = false;
                break;
            }
        }
 
        if (bad) cout << "YES\n";
    }
}