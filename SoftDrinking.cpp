#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int total_drink = k * l;
    int total_lime = c * d;
    int toast_by_drink = total_drink / nl;
    int toast_by_lime = total_lime;
    int toast_by_salt = p / np;
    cout << min({toast_by_drink, toast_by_lime, toast_by_salt}) / n;

    return 0;
}