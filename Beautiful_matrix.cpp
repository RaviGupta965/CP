# include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<vector<int>>mat(5,vector<int>(5,0));
    int row=-1,col=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> mat[i][j];
            if(mat[i][j]==1){
                row=i,col=j;
            }
        }
    }
    int ans= abs(row-2) + abs(col-2);
    cout << ans <<endl;
    return 0;
}