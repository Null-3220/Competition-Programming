#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> ls;

    for (int x = 0; x < 5; x++) {
        string st;
        cin >> st;
        ls.push_back(st);
    }

    for (int i = 0; i < ls.size(); i++) {
        if (ls[i].find("MOLANA") != string::npos ||
            ls[i].find("HAFEZ") != string::npos) {
            cout << i + 1 << " ";
        }
    }

    return 0;
}