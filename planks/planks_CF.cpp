#include <iostream>
#include <algorithm>
using namespace std;

pair <int, int> pr[1000];
int n, nails[1000], hummered = -10000, cnt;
int a, b;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a > b) swap(a, b);// ლითერალი როგორ დაიწყება 4 სიგრძით და დამთავრდება 2 სიგრძით (კოორდ). (4, 2) -> (2, 4)
        pr[i] = make_pair(b, a);// გვინდა სიგრძის დასრულებით ზრდადობით დავალაგოთ. საწყისი არის pr.second
    }

    sort(pr, pr + n);

    for(int i = 0; i < n; i++) {
        if(pr[i].second > hummered) {
            hummered = pr[i].first;
            nails[cnt] = pr[i].first;
            cnt++;
        }
    }

    cout << cnt << endl;
    for(int i = 0; i < cnt; i++) cout << nails[i] << " ";
}