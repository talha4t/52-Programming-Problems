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

    int i = 1;
    while(i <= t) {
        for (int i = 0; i < 3; i++)
            cin >> a[i];

        sort(a, a + 3);

        cout << "Case " << i << ": ";
        for (int i = 0; i < 3; i++) 
            cout << a[i] << ' ';
        
        cout << ed;

        i++;
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)


