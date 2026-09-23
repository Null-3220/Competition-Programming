#include <iostream>
using namespace std;

int main() {
    int s, f, l, x;
    cin >> s >> f >> l >> x;
    if (x < s) {
        cout << "exam did not started!";
    }else if ((x >= f) or (x > s and x < s and x > l)) {
        cout << "exam finished!";
    }else {
        cout << f - x;
    }

    
}