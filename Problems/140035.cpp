#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 2;
    
    if (n == 2 or n % 2 == 0) {
        cout << "fard";
    }else {
        
        
        for (i; i < n - 1; i++) {
            if (n % i == 0) {
                cout << "fard";
                break;
            }
        }
        
        if (n % i != 0) {
            cout << "zoj";
        }
        
        


    }

}
    

    
