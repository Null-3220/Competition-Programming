#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int sv = v.size();
    
    for (int i = 0; i < sv - 1; i++){
        cout << v[i] << " to " << v[i + 1] << ": ke ba in dar agar dar bande dar manand, dar manand." << endl;
        
        for (int z = i; z >= 0; z--) {
            cout << v[z + 1] << " to " << v[z] << ": dar manand?" << endl;
        }

        for (int z = 0; z <= i; z++) {
            cout << v[z] << " to " << v[z + 1] << ": dar mana-d." << endl;
        }
    }
}