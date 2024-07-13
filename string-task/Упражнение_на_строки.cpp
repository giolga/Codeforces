#include <bits/stdc++.h>
using namespace std;

string s,ans;
int n,i;

main() {
    cin>>s;
    n=s.size();

    for(i=0;i<n;i++) {
        if(s[i]=='A' || s[i]=='a' || s[i]=='Y' || s[i]=='y' || s[i]=='O' || s[i]=='o' || s[i]=='E' || s[i]=='e' || s[i]=='U' || s[i]=='u' || s[i]=='I' || s[i]=='i') {
            s.erase(i,1);
            i--;   
            n--;
            continue;
        }
    }
    for(i=0;i<s.size();i++) {
        if(s[i]>64 && s[i]<93) s[i]+=32;
    }
    for(i=0;i<s.size();i=i+2) {
        s.insert(i,".");
    }
    cout<<s<<endl;

}