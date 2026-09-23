#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int ans = 0;
    for (char s : n) {
        if (s == 'a' or s == 'e' or s == 'u' or s == 'o' or s == 'i') {
            ans++;
        }
    }
    cout << ans;
}