#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> anss;
    for (int i = 0; i < n; i++) {

        int l, r;
        cin >> l >> r;

        int ans = 0;
        
        int sl = sqrt(l);
        int sr = sqrt(r);

        
        for (int i = sl; i <= sr; i++) {
            
            if ((i * i) >= l and (i * i) <= r){
                ans++;
            }
        }
        
        anss.push_back(ans);
        
            
        
    }

    int sn = anss.size();
    for (int i = 0; i < sn; i++){
        cout << anss[i] << endl;
    }
    
}