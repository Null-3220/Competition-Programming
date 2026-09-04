#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int num = 1;

    for (int i = 0; i < m; i++){
        if (i % 2 == 0){
            for (int j = 0; j < n; j++){
                cout << num << " ";
                num++;
            }
        }
        else{
            int start = num + n - 1;
            for (int j = 0; j < n; j++) {
                cout << start << " ";
                start --;
                
            }
            num += n;
        }
            
        cout << "\n";
    }
}