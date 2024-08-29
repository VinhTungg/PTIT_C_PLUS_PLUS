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
        ll a[n + 1][m + 1], b[3][3], ans[n - 3 + 2][m - 3 + 2];
        ll res = 0;
        for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) cin >> a[i][j];
        for(int i = 0; i < 3; ++i) for(int j = 0; j < 3; ++j) cin >> b[i][j];
        for(int i = 0; i <= n - 3; ++i){
            for(int j = 0; j <= m - 3; ++j){
                ans[i][j] = 0;
                for(int k = 0; k <= 2; ++k){
                    for(int z = 0; z <= 2; ++z){
                        ans[i][j] += (a[i + k][j + z] * b[k][z]);
                    }
                }
                res += ans[i][j];
            }
        }
        cout << res << endl;
    }
}