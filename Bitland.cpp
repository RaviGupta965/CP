#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=0;
    int n;
    cin >> n;
    cout << endl;
    for(int i=0;i<n;i++){
        string op;
        cin >> op;
        if(op=="++x"){
            ++x;
        }
        else if(op=="x++"){
            x++;
        }
        else if(op=="--x"){
            --x;
        }
        else{
            x--;
        }
    }
    cout << x;
    return 0;
}
