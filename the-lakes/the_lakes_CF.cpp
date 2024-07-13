#include <bits/stdc++.h>
using namespace std;
 
int t,n,m,sum,ans;
int arr[1005][1005];
 
void dfs(int i, int j) {
    sum += arr[i][j];
    arr[i][j] = 0;
    
    if(i+1 < n && arr[i+1][j] > 0) dfs(i+1, j);
    if(i-1 >= 0 && arr[i-1][j] > 0) dfs(i-1, j);
    if(j+1 < m && arr[i][j+1] > 0) dfs(i, j+1);
    if(j-1 >= 0 && arr[i][j-1] > 0) dfs(i, j-1);
    
}
 
int main() {

    cin >> t;
    for(int k = 1; k <= t; k++) {
        cin >> n >> m;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(arr[i][j] != 0) {
                    dfs(i,j);
                }
                ans = max(ans, sum);
                sum = 0;
                
            }
        }
        cout << ans << endl;
        ans = 0;
    }
}