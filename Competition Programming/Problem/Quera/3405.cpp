#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    vector<int> la;
    while (true) {
        cin >> a;
        if (a == 0){
            break;
        }else la.push_back(a);
    }
    int lla = la.size();
    for (int i = lla - 1; i >= 0; i--){
        cout << la[i] << endl;
    }
}