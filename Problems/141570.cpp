#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "out";
    }
    else if (n > 6 and n <= 10) {
        cout << "black";
    }
    else cout << "white";
    
}