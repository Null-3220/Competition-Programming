#include <iostream>
#include <vector>
using namespace std;

int main() {
    string a;
    cin >> a;
    vector<char> v;



    for (char c : a) {
        v.push_back(c);
    }
    
    if (v[0] == 'Y') {
        cout << "Haji";
    }
    else if (v[1] == 'Y')
    {
        cout << "Karbalaee";
    }
    else if (v[2] == 'Y') 
    {
        cout << "Mashti";
    }
    else cout << "Agha";
    
    
    

}   