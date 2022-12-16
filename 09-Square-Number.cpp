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

        int temp = sqrt(n);
        if (n == temp * temp)
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)


