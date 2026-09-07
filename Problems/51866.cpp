#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> v;
    int t;

    for (int i = 0; i < a; i++) {
        cin >> t;
        v.push_back(t);
    }

    int lv = v.size();
    int max = 0;

    for (int i = 0; i < lv; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    int min = 5001;
    for (int i = 0; i < lv; i++) {
        if (min > v[i]) {
            min = v[i];
        }
    }

    if (b == 1 or (b == 3 and a <= 3)) {
        cout << max;
    }else if (b == 3 and a > 3) {
        cout << min;
    }

    
    else if (b == 2) {
    int smallest = 5001;

    for (int i = 1; i < lv; i++) {
        if (v[i] < v[i - 1] && v[i] < smallest) {
            smallest = v[i];
        }
    }

    cout << smallest;
}
    
}