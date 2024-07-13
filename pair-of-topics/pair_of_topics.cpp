#include <bits/stdc++.h>
using namespace std;

long long n, a[1000001], b[1000005], ans;

int main() {
    cin >> n;
    vector <int> c(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        c[i] = a[i] - b[i];
    }

    sort(c.begin(), c.end());
    for(int i = 0; i < n; i++) {
        if(c[i] <= 0) continue;
        auto pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
        // cout << pos << " ";
        ans += i - pos;
    }
    cout << ans << endl;
    return 0;
}

// 4 8 2 6 2
// 4 5 4 1 3

// 0 3 -2 5 -1
// -2 -1 0 3 5