# include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;

    for(int i=0;i<tt;i++){
        int n,k;
        cin >> n;
        cin >>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int curr=arr[k-1];
        int level=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq;
        for(int i=0;i<n;i++){
            if(arr[i] > curr){
                pq.push({arr[i],i});
            }
        }

        while(!pq.empty()){
            if(pq.top().first==curr){
                pq.pop();
                continue;
            }
            if(curr-level >= pq.top().first-curr){
                level+= pq.top().first-curr;
                curr=pq.top().first;
                pq.pop();
            }
            else{
                break;
            }
        }
        if(pq.empty()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}