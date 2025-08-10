#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int i=0;i<tt;i++){
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];

        for(int i=0;i<n;i++){
            cin >> arr1[i];
        }
        for(int i=0;i<n;i++){
            cin >> arr2[i];
        }
        int ans=1;
        for(int i=0;i<n;i++){
            if(arr1[i] > arr2[i]){
                ans+=(arr1[i]-arr2[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}