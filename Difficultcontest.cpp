# include <bits/stdc++.h>
using namespace std;
void remove_difficulty(string temp){
    vector<int>cnt(26,0);
    for(auto it : temp){
        cnt[it-'A']++;
    }
    string res="";
    while(cnt[19]){
        res+='T';
        cnt[19]--;
    }

    for(int i=0;i<26;i++){
        if(cnt[i]){
            while(cnt[i]){
                res+=('A' + i);
                cnt[i]--;
            }
        }
    }
    cout << res << endl;
    return;
}
int main(){
    int tt;
    cin >> tt;

    for(int i=0;i<tt;i++){
        string temp;
        cin >> temp;
        remove_difficulty(temp);
    }
    return 0;
}