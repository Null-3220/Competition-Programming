#include <iostream>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;

    int ans = 0;
    for (int i = 1; i <= a; i++){ 
        if (a % i != 0){
            continue;
        }
        for (int j = 1; j <= b; j++){
            if (b % j == 0 and i + j <= x){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}