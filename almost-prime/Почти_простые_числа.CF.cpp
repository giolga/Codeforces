#include <bits/stdc++.h>
using namespace std;

long long n,i,j,arr[10000005],mat[10000005];
long long cnt;//count prime numbers;

void sieve(long long n) {
    for(i = 2; i <= n; i++) {
        if(arr[i] > 0) continue;
        else {
            for(j = i*2; j <=n; j +=i) {
                if(arr[j] > 0) arr[j]++;
                else arr[j] = 1;
            }
        }
    }  
}

main() {
    cin >> n;
    sieve(n);
    for(i = 2; i <= n; i++) {
        if(arr[i] == 2) cnt++;
    }
    cout << cnt << endl;
}