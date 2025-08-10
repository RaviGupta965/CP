# include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int pos;
        pos=3;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0) cout << -1 << " ";
            else{
                if(i==n-1){
                    cout << 2 << " ";
                }
                else cout << pos << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}