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
    int t;
    cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        ll a[n + 1][m + 1] = {}, pre[n + 1][m + 1];
        foru(i, 1, n) foru(j, 1, m){
            cin >> a[i][j];
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] + a[i][j] - pre[i - 1][j - 1];
        }
        ll ans = LLONG_MIN;
        for(int i = 1; i <= n - 1; ++i){
            for(int j = 1; j <= m - 1; ++j){
                for(int k = i; k <= n; ++k){ 
                    for(int h = j; h <= m; ++h){ 
                        ans = max(ans, pre[k][h] - pre[k][j - 1] - pre[i - 1][h] + pre[i - 1][j - 1]); 
                    } 
                }
            }
        }
        cout << ans << endl;
    }
}