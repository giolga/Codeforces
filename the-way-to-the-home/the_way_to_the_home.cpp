#include <bits/stdc++.h>
using namespace std;
 
int t,n,m,d,x, sav;
struct ugra {
    int r;
    int step;
};
 
queue <ugra> q;
ugra qin,qout;
 
int dapa[10000];
string s;
 
int dr[100];
 
int r1;
int rowz,newr,stepz;
 
void BFS(int n) {
    
    dapa[r1]= 0;
    qin.r = 1; qin.step = 0;
    q.push(qin);
 
    while(!q.empty()) {
        qout = q.front();
        q.pop();
        stepz = qout.step + 1;
        rowz = qout.r;
        
        for(int i = 0; i < d; i++) {
            newr = rowz + dr[i];
            
            if(newr >= 1 && newr <= n) {
 
                    if(dapa[newr] == -1 && s[newr-1] != '0') {
                        dapa[newr] = stepz;
                        qin.r = newr;
                        qin.step = stepz;
                        q.push(qin);
                    }
            }
        }
    }
}
 
int main() {
    cin >> n >> d;
    cin >> s;
    x = 1;
    for(int i = 1; i <= 1000; i++) {
        dapa[i] = -1;
    }
    
    for(int i = d-1; i >= 0; i--) {
        dr[i] = x;
        x++;
    }
    
    r1 = 1;
    BFS(n);
 
    cout << dapa[n];
    return 0;
}