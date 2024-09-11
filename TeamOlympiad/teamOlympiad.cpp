#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> programmers, mathematicians, sportsmen;

    // Reading input and storing the indices of children based on their skills
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            programmers.push_back(i);
        } else if (t == 2) {
            mathematicians.push_back(i);
        } else if (t == 3) {
            sportsmen.push_back(i);
        }
    }

    // The number of teams is determined by the smallest group
    int teams = min({programmers.size(), mathematicians.size(), sportsmen.size()});
    cout << teams << endl;

    // Forming teams
    for (int i = 0; i < teams; i++) {
        cout << programmers[i] << " " << mathematicians[i] << " " << sportsmen[i] << endl;
    }

    return 0;
}