//Solution Date 28/08/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (s.find("...") != string::npos) {
            cout << 2 << "\n";
        } else {
            cout << count(s.begin(), s.end(), '.') << "\n";
        }
    }
    return 0;
}
