#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

string s;
int n,i;
multiset <int> st;
multiset <int> :: iterator it;

main() {
  cin>>s;
  n=s.size();
  for(i=0;i<n;i++) {
    if(s[i]>=48 && s[i]<=57) st.insert(s[i]-48);
  }
  it=st.begin();
  cout<<*it;
  for(advance(it,1);it!=st.end();it++) cout<<"+"<<*it;
}