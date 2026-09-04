#include <iostream>
#include <vector>
using namespace std;

int main() {
    string a;
    cin >> a;

    vector<char> b;

    for (char c : a) {
        if (c == '=') {
            if (!b.empty()) {
                b.pop_back(); // remove previous character
            }
        } else {
            b.push_back(c);
        }
    }

    for (char c : b) {
        cout << c;
    }

    return 0;
}
