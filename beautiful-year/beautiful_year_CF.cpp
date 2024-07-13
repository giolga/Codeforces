#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

long long n,m,k,r;
set <long long> st;

main() {
  cin>>n;
  n++;
  while (1) {
    m=n;
    while (n>0) {
      r=n%10;
      st.insert(r);
      n/=10;
    }
    if(st.size() == 4) {
        cout<<m;
        return 0;
    } else {
        n=m;
      n++;
      st.clear();
    }
  }
  

}