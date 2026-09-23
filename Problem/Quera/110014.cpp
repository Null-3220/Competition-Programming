#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> a;
    vector<string> b;

    string n;

    for (int i = 0; i < 2; i++) {
        cin >> n;
        a.push_back(n);
    }

    for (int i = 0; i < 2; i++) {
        cin >> n;
        b.push_back(n);
    }

    if (a[0] == a[1] ||
        b[0] == b[1] ||
        a[0] == b[1] ||
        b[0] == a[1]) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}