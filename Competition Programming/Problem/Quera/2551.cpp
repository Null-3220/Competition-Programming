#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    char op;

    cin >> a;
    cin >> op;
    cin >> b;

    if (op == '*') {
        // Remove the first digit (1) and combine zeros
        cout << "1";
        for (int i = 1; i < a.size() + b.size() - 1; i++) {
            cout << "0";
        }
    }
    else { // +
        if (a.size() == b.size()) {
            cout << "2";
            for (int i = 1; i < a.size(); i++) {
                cout << "0";
            }
        }
        else {
            if (a.size() < b.size()) {
                swap(a, b);
            }

            cout << "1";

            for (int i = 1; i < a.size() - b.size(); i++) {
                cout << "0";
            }

            cout << "1";

            for (int i = 1; i < b.size(); i++) {
                cout << "0";
            }
        }
    }

    return 0;
}