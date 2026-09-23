#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cin >> a;
    cin >> b;

    if (a[0] == b[b.size() - 1]) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}