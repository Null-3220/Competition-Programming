#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    while (n.length() != 1) {
        int total = 0;

        for (char digit : n) {
            total += digit - '0';
        }

        n = to_string(total);
    }

    cout << n;

    return 0;
}