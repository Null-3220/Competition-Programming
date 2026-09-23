#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a;
    string b;

    cin >> b;

    for (char s : b) {
        a.push_back(s - '0');
    }

    next_permutation(a.begin(), a.end());

    for (int x : a) {
        cout << x;
    }
}