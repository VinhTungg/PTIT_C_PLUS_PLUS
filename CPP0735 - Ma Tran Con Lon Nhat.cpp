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
int t, n, m;

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int a[505][505] = {};
        int dp[505][505] = {};
        int ans = 0, check = 0;
        foru(i, 1, n) foru(j, 1, m){
            cin >> a[i][j];
            dp[i][j] = a[i][j];
            if(a[i][j]) check = 1;
        }
        if(!check) cout << "0\n";
        else{
            foru(i, 1, n)
            foru(j, 1, m){
                if(a[i][j]){
                    if(a[i - 1][j - 1] && a[i - 1][j] && a[i][j - 1]){
                        dp[i][j] = min({dp[i - 1][j - 1] + 1, dp[i - 1][j] + 1, dp[i][j - 1] + 1});
                        
                    }
                    ans = max(ans, dp[i][j]);
                }
            }
            cout << ans << endl;
        }
    }
}