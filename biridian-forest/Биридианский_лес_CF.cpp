#include <bits/stdc++.h>
using namespace std;
 
struct info {
    int r;
    int c;
    int step;
};

queue <info> q;
info qin,qout;

int n,m,sum;
int r1,c1,r2,c2;
int rowz,colz,stepz;
int newr, newc;

int dr[4] = {1, 0,  0, -1};
int dc[5] = {0, 1, -1,  0};

char map_[1005][1005];
int board[1005][1005];
int distributors[1005][1005], k = 1;

char c[1005][1005];

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> c[i][j];
            if(c[i][j] >= 48 && c[i][j] <= 57) {
                board[i][j] = -1;
                distributors[i][j] = c[i][j] - 48;
                k++;
            } 
            else if (c[i][j] == 'T') board[i][j] = -5;
            else if(c[i][j] == 'E') {//start coordinate info
                board[i][j] = -1;
                r1 = i;
                c1 = j;
            }
            else if(c[i][j] == 'S') {//end coordinate info row/column
                board[i][j] = -1;
                r2 = i;
                c2 = j;
            }
        }
    }


    board[r1][c1] = 0;
    qin.r = r1; qin.c = c1; qin.step = 0;
    q.push(qin);



    while(!q.empty()) {
        qout = q.front();
        q.pop();

        rowz = qout.r; colz = qout.c; stepz = qout.step + 1;

        for(int i = 0; i < 4; i++) {
            newr = rowz + dr[i];
            newc = colz + dc[i];

            if(newr>=1 && newr<=n && newc>=1 && newc<=m) {
                if(board[newr][newc] == -1) {
                    board[newr][newc] = stepz;
                    qin.r = newr;
                    qin.c = newc;
                    qin.step = stepz;
                    q.push(qin);
                }
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int  j = 1; j <= m; j++) {
            if(distributors[i][j] > 0 && board[i][j] <= board[r2][c2] && board[i][j] > 0) sum += distributors[i][j];
        } 
    } 

    cout << sum;
    
    return 0;
}
