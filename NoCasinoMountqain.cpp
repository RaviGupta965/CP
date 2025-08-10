#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == 0){
                cnt++;
                if (cnt == k){
                    ans++;
                    cnt = 0;
                    i++; // skip rest day
                }
            }
            else{
                cnt = 0;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}