#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    vector<int> n;

    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        n.push_back(x);
    }

    int sum = accumulate(n.begin(), n.end(), 0);

    double average = (double)sum / 4;

    int product = 1;
    for (int i : n) {
        product *= i;
    }

    int smax = *max_element(n.begin(), n.end());
    int smin = *min_element(n.begin(), n.end());

    cout << fixed << setprecision(6);

    cout << "Sum : " << (double)sum << endl;
    cout << "Average : " << average << endl;
    cout << "Product : " << (double)product << endl;
    cout << "MAX : " << (double)smax << endl;
    cout << "MIN : " << (double)smin << endl;

    return 0;
}