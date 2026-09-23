#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long sum = a + b + c;

    if (a == b && b == c) {
        cout << 0;
    } 
    else if (sum % 3 == 0 && (a == sum / 3 || b == sum / 3 || c == sum / 3)) {
        cout << 1;
    } 
    else {
        cout << 2;
    }

    return 0;
}
