#include <bits/stdc++.h>
using namespace std;

string multiply(string nums1, string nums2) {
   int n=nums1.size();
   int m=nums2.size();
   
   string ans(n+m,48);
   for(int i=n-1;i>=0;i--){
      for(int j=m-1;j>=0;j--){
         int p=(nums1[i]-48)*(nums2[j]-48)+(ans[i+j+1]-48);
         ans[i+j+1]=p%10+48;
         ans[i+j]+=p/10 ;
      }
   }
   for(int i=0;i<m+n;i++){
      if(ans[i]!=48) return ans.substr(i);
   }
   return "0";
}

main(){
  int n,m;
  string s1,s2;
  cin>>s1>>s2;
  cout << multiply(s1, s2);
}