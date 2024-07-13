#include <bits/stdc++.h>
using namespace std;

long long n,i,j,k,arr[10005],prime[10005],c;
long long ans,cnt;//count prime numbers;

void sieve(long long n) {
    for(i = 2; i <= n; i++) {
        if(arr[i] > 0) continue;
        else {
            prime[c] = i;
            c++;
            for(j = i*i; j <=n; j +=i) {
                arr[j] = 1;
            }
        }
    }  
}

main() {
    cin >> n >> k;
    sieve(n);
    for(i = 0; i < c-1; i++) {
        ans = prime[i] + prime[i + 1] + 1;
        if(ans > n) break;
        if(!arr[ans]) cnt++;
    }
    if(cnt >= k) cout << "YES\n";
        else cout << "NO\n";
}