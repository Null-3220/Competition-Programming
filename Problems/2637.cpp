#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = 0;
    int y = 0;
    int z = n / 2;
    x = z;
    y = n - z;
    cout << (x + 1) * (y + 1) << endl;
    return 0;
}