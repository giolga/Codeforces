#include <iostream>
using namespace std;


int main() {
    string previous = "";
    int n;
    cin >> n;
    int groups = 1;

    for (int i = 0; i < n; i++)
    {
        //Console.WriteLine('\t' + previous);
        string magnet;
        cin >> magnet;

        if (previous == "")
        {
            previous = magnet;
            continue;
        }

        if (previous[previous.size() - 1] != magnet[0])
        {
            previous += magnet;
        }
        else
        {
            previous = magnet;
            groups++;
        }
    }

    cout << groups << endl;
    
    return 0;
}