#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        string s;
        cin >> s;
        string sub = s.substr(2, s.size() - 2);

        if(s.substr(0, 2) != "10") {
            cout << "NO" << endl;
            continue;
        }
        else if(sub[0] == '0') {
            
            cout << "NO" << endl;
            continue;
        }
        if(sub.size() == 1 && sub[0] == '1') {
            cout << "NO" << endl;
            continue;
        } else {
            cout << "YES\n";

        }

    }
    return 0;
}