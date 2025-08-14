#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int tt;
    cin >> tt;
    for(int i=0;i<tt;i++){
        string s;
        cin >> s;
        vector<int>temp;
        int k=0;
        int e=s.length()-1;
        int mul = 1;
        while(e>=0){
            if(s[e]!='0'){
                k++;
                int dig = s[e]-'0';
                temp.push_back(dig * mul);
            }
            mul = mul * 10;
            e--;
        }
        
        cout << k << endl;
        for(int j=temp.size()-1;j>=0;j--){
            cout << temp[j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
