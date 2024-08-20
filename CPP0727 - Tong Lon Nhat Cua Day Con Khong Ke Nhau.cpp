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
        int n; cin >> n;
        vector<ll> v(n + 1);
        foru(i, 1, n) cin >> v[i];
        ll dp[n];
        dp[0] = 0; dp[1] = v[1];
        foru(i, 2, n){
            dp[i] = max(dp[i - 2] + v[i], dp[i - 1]);
        }
        cout << dp[n] << endl;
    }
}