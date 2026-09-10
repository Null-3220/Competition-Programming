#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        if (s1.size() != s2.size()) {
            cout << "NO\n";
            continue;
        }

        bool same = false;

        string rev = s1;
        reverse(rev.begin(), rev.end());

        for (int i = 0; i < (int)s1.size(); i++) {
            string rotated = s1.substr(i) + s1.substr(0, i);

            if (rotated == s2) {
                same = true;
                break;
            }

            string rotatedRev = rev.substr(i) + rev.substr(0, i);

            if (rotatedRev == s2) {
                same = true;
                break;
            }
        }

        cout << (same ? "YES" : "NO") << '\n';
    }
}