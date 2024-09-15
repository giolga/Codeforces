#include <iostream>
#include <string>
using namespace std;


string equal(string s1, string s2) {
    while (s1.length() < s2.length()) {
        s1 = '0' + s1;
    }
    while (s2.length() < s1.length()) {
        s2 = '0' + s2;
    }

    return s2;
}

string difference(string s1, string s2) {
    string ans = "";
    bool borrow = false;

    for(int i = s1.size() - 1; i >= 0; i--) {
       int st1 = s1[i] - 48;
       int st2 = s2[i] - 48;

       if(borrow) {
        if(st1 == 0) {
            st1 = 9;
            if(i != s1.size() - 1)
                s1[i-1] = char((int)(s1[i-1]) - 1);
        } 
        else st1--;

        borrow = false;
        
       }

       if(st1 - st2 < 0) {
            st1 += 10;
            st1 -= st2;
            borrow = true;
       } else st1 -= st2;

        ans = to_string(st1) + ans;  
        
    }

    for(int i = 0; i < s1.size(); i++){
        if(ans[i] != 48) return ans.substr(i);
    }
    return "0";
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string s = equal(s1,s2);
    string ans = difference(s1, s);
    
    cout << ans << endl;

    return 0;
}