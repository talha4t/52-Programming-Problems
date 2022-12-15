#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int a[15];

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        ll n;
        cin >> n;

        ll fact = 1;

        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }

        cout << fact << ed;

    }
    return 0;
}

//github.com/talha4t (Talha Mahmud)


