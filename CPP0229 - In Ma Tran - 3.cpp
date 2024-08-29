#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
#define ford(i,a,b) for(int i = a; i >= b; --i)
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define endl "\n"
#define sz size
#define all(a) a.begin(), a.end()
#define MOD 1000000007

using namespace std;

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n + 1][m + 1];
        vector<vector<int>> ans(m + n - 1);
        foru(i, 0, n - 1){
            foru(j, 0, m - 1){
                cin >> a[i][j];
                ans[i + j].pb(a[i][j]);
            }
        }
        foru(i, 0, ans.size() - 1){
            if(i & 1) for(auto x : ans[i]) cout << x << ' ';
            else for(auto x = ans[i].rbegin(); x != ans[i].rend(); ++x) cout << *x << ' ';
        }
        cout << endl;
    }
}