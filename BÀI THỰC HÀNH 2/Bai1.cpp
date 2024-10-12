#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 5][n + 5];
        unordered_map<int, int> cnt;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin >> a[i][j];
                if(cnt[a[i][j]] == i) ++cnt[a[i][j]];
            }
        }
        int ans = 0;
        for(auto &x : cnt) if(x.second == n) ++ans;
        cout << ans << endl;
    }
}