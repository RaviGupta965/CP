#include <bits/stdc++.h>
using namespace std;

void invert(long long num){
    string s = to_string(num);
    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';
        if (i == 0 && d == 9) continue; 
        if (9 - d < d) s[i] = '0' + (9 - d);
    }
    cout << s << "\n";
}

int main(){
    long long  num;
    cin >> num;
    invert(num);
    return 0;
}