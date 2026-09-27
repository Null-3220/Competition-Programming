#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    for (int i = 0; i < 5; i++){
        int n;
        cin >> n;
        v.push_back(n);
    }

    bool y = false;

    for (int a = 0; a < (int)v.size() && !y; a++){
        for (int b = a + 1; b < (int)v.size() && !y; b++){
            for (int c = b + 1; c < (int)v.size() && !y; c++){
                int x = v[a];
                int o = v[b];
                int z = v[c];

                if ((x + o > z) && (o + z > x) && (x + z > o)){
                    y = true;
                }
            }
        }
    }
    if (y == false){
        cout << "NO";
    }else cout << "YES";
}