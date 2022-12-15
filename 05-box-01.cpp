#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << '*';
            }
            cout << '\n';
        }

        if (t != 0)
            cout << '\n';
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)


