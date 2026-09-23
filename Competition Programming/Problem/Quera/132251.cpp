#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ans;
    for (int i = 0; i < 5; i++) {
        vector<char> v;
        string s;
        cin >> s;
        for (char c : s) {
            v.push_back(c);
        }
        int sv = v.size();
        for (int x = 0; x < sv - 2; x++) {
            if (v[x] == 'F' and v[x + 1] == 'B' and v[x + 2] == 'I') {
                ans.push_back(i + 1);
                break;
            }
        }
    }
    
    int ss = ans.size();
    if (ss == 0) {
        cout << "HE GOT AWAY!";
    }else {

    for (int y = 0; y < ss; y++) {
        cout << ans[y] << " ";
    }
}
}