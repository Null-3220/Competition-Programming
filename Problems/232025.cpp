#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    vector<string> ans;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;

        string s;
        cin >> s;

        int totalq = 0;
        int totalc = 0;

        for (char c : s) {
            if (c == 'Q'){
                totalq++;
            }else {
                totalc++;
            }
        }
        
        if (totalc > totalq) {
            ans.push_back("CodeCup");
        }else ans.push_back("Quera");
        
        
    
    }
    for (int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
}
