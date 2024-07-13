#include <bits/stdc++.h>
using namespace std;

int n,m,a,b;
int bus,ring,unknown,star;
vector <int> vt[100005];
vector <int> :: iterator it;

main() {
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }

    for(int i = 1; i <= n; i++) {
        if(vt[i].size() == 1) bus++;
        else if(vt[i].size() == 2) ring++; 
        else if(vt[i].size() == m) star++;
        // cout << vt[i].size() << " ";
    }
    
    if(star) cout << "star topology" << endl;
    else if(bus > 0 && bus + ring == n) cout << "bus topology \n";
    else if(ring == n) cout << "ring topology \n";
    else cout << "unknown topology \n";
}