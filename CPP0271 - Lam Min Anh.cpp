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
        int n, m, s; cin >> n >> m >> s;
        ll a[n + 1][m + 1] = {}, ans[n - s + 2][m - s + 2] = {}, pre[n + 1][m + 1] = {};
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= m; ++j){
                cin >> a[i][j];
                pre[i][j] = pre[i - 1][j] + pre[i][j - 1] + a[i][j] - pre[i - 1][j - 1];
            }
        }
        for(int i = 1; i <= n - s + 1; ++i){
            for(int j = 1; j <= m - s + 1; ++j){
                ans[i][j] = (pre[i + s - 1][j + s - 1] - pre[i + s - 1][j - 1] - pre[i - 1][j + s - 1] + pre[i - 1][j - 1]) / (s * s);
            }
        }
        for(int i = 1; i <= n - s + 1; ++i){
            for(int j = 1; j <= m - s + 1; ++j){
                cout << ans[i][j] << ' ';
            }
            cout << endl;
        }
    }
}