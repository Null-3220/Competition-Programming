#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b && a == 2){
        cout << 0;
        
    }else if (a != b){
        cout << 1 << endl << "7 7";
    }else {
        for (int i = 7; i > 1; i--){
            if (i != a){
                cout << 1 << endl << i << " " << i;
                break;
            }
        }
    }
}