#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int times;

    cin >> x >> times;

    for (int i = 0; i < times; i++) {
        x /= 2;
    }

    if (x < 0) {
        cout << -floor(abs(x) + 0.5);
    } else {
        cout << (int)x;
    }

    return 0;
}