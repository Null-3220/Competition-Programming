#include <iostream>
#include <vector>
using namespace std;

int main () {
    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    if (a == c){
        cout << "Vertical";
    }else if (b == d)
    {
        cout << "Horizontal";
    }
    else cout << "Try again";
    
}