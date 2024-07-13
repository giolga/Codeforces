#include <iostream>
using namespace std;
 
int n,i,j,a[6][6],I,J,cnt,cnt1;
 
main() {
    n=5;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n;i++) {
         for(j=1;j<=n;j++) {
            if(a[i][j]==1) {
                I=i;
                J=j;
                break;
            }
        }
    }
    for(i=1;i<=n;i++) {
        if(I<3) {
            while(I!=3) {
                I++;                
                cnt++;
            }
        } else if(I>3) {
            while(I!=3) {
                 I--;
                cnt++;
            }
        } else cnt+=0; 
        if(J<3) {
            while(J!=3) {
                J++;
                cnt1++;
            }
        } else if (j>3) {
            while(J!=3) {
                J--;
                cnt1++;
            }
        } else cnt1+=0;
        
    }
    cout<<cnt+cnt1;
}