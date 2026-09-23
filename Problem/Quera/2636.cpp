#include <iostream>
using namespace std;

int main() {
    int ls[6];
    
    for (int i =0; i < 6; i++) {
        cin >> ls[i];
    }

    cout << 1 - ls[0] << " ";
    cout << 1 - ls[1] << " ";
    cout << 2 - ls[2] << " ";
    cout << 2 - ls[3] << " ";
    cout << 2 - ls[4] << " ";
    cout << 8 - ls[5] << " ";

    return 0;
}
