#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    ll k;
    cin >> n >> k;
    unordered_map<ll,ll> cnt;
    if(k==1){
        cout << "YES" << endl;
    }
    for (ll i = 0; i < n; i++){
        ll num;
        cin >> num;
        cnt[num % k]++;
        cnt[k - num % k]++;
    }
    for (ll i = 0; i < n; i++){
        long long int num;
        cin >> num;
        cnt[num % k]--;
        cnt[k - num % k]--;
    }
    for (auto it : cnt){
        if (it.second != 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}