#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cin >> a;

    vector<long long> ans;
    

    for (int i = 0; i < a; i++) {
        int n, k;
        cin >> n >> k;
        long long l = 0;

        vector<int> b;
        for (int i = 0; i < n; i++){
            b.push_back(1);
        }

        

        vector<int> v;
        for (int t = 0; t < n; t++){
            int i;
            cin >> i;
            v.push_back(i);
        }
        
        int m = v.size();

        while (m >= k){
            
            int kp = k - 1;
            int mk = m - k;

            if (b[kp] == 0){
                while (b[kp] == 0){
                    kp++;
                }
            }
            if (b[mk] == 0){
                while (b[mk] == 0){
                mk--;
            }
        }
            int z = v[kp];
            int p = v[mk];
            
            
            long long u = max(z, p);

            l += u;
            

            if (u == z){
                b[mk] = 0;
                m--;
            }else if (u == p)
            {
                b[kp] = 0;
                m--;
            }
            
            

        }
        ans.push_back(l);
    }
    for (int q = 0; q < (int)ans.size(); q++){
        cout << ans[q] << endl;
    }
}