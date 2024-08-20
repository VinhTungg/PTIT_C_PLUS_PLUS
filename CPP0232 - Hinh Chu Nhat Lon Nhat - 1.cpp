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
    int t = 1; 
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n + 5][m + 5] = {}, sum[n + 5][m + 5] = {};
        foru(i, 1, n) foru(j, 1, m){
            cin >> a[i][j];
            if(a[i][j]){
                if(sum[i - 1][j]) sum[i][j] = (sum[i - 1][j] + a[i][j]);
                else sum[i][j] = a[i][j];
            }
        }
        int ans = 0, tmp;
        foru(i, 1, n) {
            sort(sum[i] + 1, sum[i] + m + 1, greater<int>());
            tmp = INT_MAX;
            foru(j, 1, m){
                tmp = min(tmp, sum[i][j]);
                ans = max(ans, tmp * j);
            }
        }
        cout << ans << endl;
    }
}