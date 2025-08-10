#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int i=0;i<tt;i++){
        int num;
        cin >> num;
        int dig=INT_MAX;
        while(num>0){
            int d=num%10;
            dig=min(d,dig);
            num=num/10;
        }
        cout << dig << endl;
    }
    return 0;
}