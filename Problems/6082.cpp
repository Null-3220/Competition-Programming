#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;

    for (int i = 0; i <= n; i++) {
        string st;
        cin >> st;

        for (char z : st) {
            if (z == '*') {
                x++;
            }
        }
    }

    cout << x;

    return 0;
}