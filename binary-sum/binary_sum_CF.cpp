#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

string st1,st2;
string addTwoString(string s1, string s2) {
  int num=0;
  string sum="";

  while(s1.size()>s2.size()) s2='0'+s2;//თუ რომელიმე სთრინგი გრძელია მეორეზე, ის მეორე ნულებით უნდა შევავსოთ
  while(s2.size()>s1.size()) s1='0'+s1;//რომ ერთმანეთის ტოლი გახდნენ-->> 150 და 15 --> 150 და 015
  
  for(int i=s1.size()-1;i>=0;i--) {
    num+=(s1[i]-48)+(s2[i]-48);
    sum=char((num%2)+48)+sum;
    num/=10;
  }
  if(num==1) {
    sum="1"+sum;
  }

  return sum;
}

main() {
  cin>>st1>>st2;
  cout<<addTwoString(st1,st2);
}
