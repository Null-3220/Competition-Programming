#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> fib = {1, 2};

    for (int i = 2; i < n; i++) {
        int a = fib[i - 1];
        int b = fib[i - 2];

        fib.push_back(a + b);
    }

    for (int i = 1; i <= n; i++) {
        if (find(fib.begin(), fib.end(), i) != fib.end()) {
            cout << "+";
        } else {
            cout << "-";
        }
    }

    return 0;
}