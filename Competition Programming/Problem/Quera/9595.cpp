#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    int ans = 0;
    
    for (int i = 0; i < n; i++){
        string s1;
        getline(cin, s1);
        
        for (int j = 0; j < s1.size(); ) {
        if (s1[j] == ' ') {
            s1.erase(j, 1);
        } else {
        j++;
    }
}
        
        string s2;
        getline(cin, s2);

for (int j = 0; j < s2.size(); ) {
    if (s2[j] == ' ') {
        s2.erase(j, 1);
    } else {
        j++;
    }
}
        int ss1 = s1.size();
        int ss2 = s2.size();
        if (ss1 != ss2){ 
            if (ss1 > ss2){
            ans += ss1 - ss2;
            }else{
                ans += ss2 - ss1;
            }
        }else{
        
        for (int h = 0; h < (int)s1.size(); h++){
            if (s1[h] != s2[h]){
                ans++;
            }
        }
    }
}
 cout << ans;   
}