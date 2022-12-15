#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ct = 0;
    for (int i = 1000; i >= 1; i--) {
        cout << i << ' ';

        ct++;
        if (ct == 5) {
            cout << '\n';
            ct = 0;
        }
    }
    return 0;
}

//github.com/talha4t (Talha Mahmud)


