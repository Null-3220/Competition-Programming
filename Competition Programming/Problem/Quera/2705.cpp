#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> n(2);

    cin >> n[0] >> n[1];

    int p = n[0];
    int d = n[1];

    int i = 1;

    while ((d * i) % p > p / 2) {
        i++;
    }

    cout << d * i;

    return 0;
}