#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

string multiply(string s1, string s2) {
   int n=s1.size();
   int m=s2.size();
   int num,i,j;   
   string ans(m+n,48);

   for(i=n-1;i>=0;i--) {
      for(j=m-1;j>=0;j--) {
         num=(s1[i]-48)*(s2[j]-48)+(ans[i+j+1]-48);
         ans[i+j+1]=num%10+48;
         ans[i+j]+=num/10;
      }
   }
   for(i=0;i<ans.size();i++) {
      if(ans[i]!=48) return ans.substr(i);
   }
   return "0";
}

main() {
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);
   
   string s;
   int m;
   cin>>m;
   if(m==0) {
      cout<<1<<endl;
      return 0;
   }
   if(m==1) {
      cout<<2<<endl;
      return 0;
   }
   s=multiply("2","2");
   m--;
   m--;
   while(m>0) {
      s=multiply(s,"2");
      m--;
      //cout<<s3<<endl;
   }
   cout<<s;
}