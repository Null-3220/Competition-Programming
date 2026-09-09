#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> v;

    for (int i = 0; i < t; i++) {
        int ans = 0;
        int a, b, h;

        cin >> a >> b >> h;

        if (a >= h) {
            ans++;
        }else {
            int ch = 0;
            while (true)
            {
                ch = ch + a;
                ans++;
                if (ch >= h){
                    break;
                }else ch -= b;
            }
            
            
        }

        
        v.push_back(ans);
    }

    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i] << endl;
    }
}