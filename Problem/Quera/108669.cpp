#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    vector<int> t(n);
    for (int &x : t) cin >> x;

    for (int k = 0; k <= n; k++) {
        bool ok = true;


        for (int i = 0; i < k && ok; i++) {
            if (t[i] > 45 + a) ok = false;
            if (i > 0 && t[i] <= t[i - 1]) ok = false;
        }


        for (int i = k; i < n && ok; i++) {
            if (t[i] < 45 || t[i] > 90 + b) ok = false;
            if (i > k && t[i] <= t[i - 1]) ok = false;
        }

        if (ok) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}