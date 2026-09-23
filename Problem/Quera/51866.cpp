#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> l;
    for (int i = 0; i < n1; i++){
        int v;
        cin >> v;
        l.push_back(v);
    }
    int m = *min_element(l.begin(), l.end());
    int ma = *max_element(l.begin(), l.end());

    if (n2 == 1) {
        cout << ma;
    }else if (n2 >= 3)
    {
        cout << m;
    }else{
        if (m == l[0] or m == l[l.size() - 1]) {
            cout << m;
        }else cout  << min(l[0], l[l.size() - 1]);
    }
    
}