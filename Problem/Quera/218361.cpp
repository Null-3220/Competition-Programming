#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> x;

    int value;

    for (int i = 0; i < 8; i++) {
        cin >> value;
        x.push_back(value);
    }

    vector<int> y;

    for (int i = 0; i < 8; i++) {
        cin >> value;
        y.push_back(value);
    }
    
    int total = 0;
    for (int i = 0; i < 8; i++) {
        if (x[i] == y[i] and x[i] == 1) {
            total++;
        }
    }
    
    cout << total << endl;
    return 0;
}