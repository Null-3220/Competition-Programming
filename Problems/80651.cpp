#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> v;
    for (int i = 0; i < 6; i++) {
        cin >> n;
        v.push_back(n);

    }
    int total = 0;
    for (int i = 0; i < (int)v.size(); i += 2){
        int c = v[i];
        int d = v[i + 1];
        total += min(c, d);
    }
    cout << total;
}
