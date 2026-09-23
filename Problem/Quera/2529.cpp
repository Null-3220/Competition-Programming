#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;

        vector<char> v;

        for (char s : c) {
            if (find(v.begin(), v.end(), s) == v.end()) {
                v.push_back(s);
            }
        }

        if (v.size() > answer) {
            answer = v.size();
        }
    }

    cout << answer;
}