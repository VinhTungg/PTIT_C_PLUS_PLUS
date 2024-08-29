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

ll countDivisible(string s, int n){
    ll dp[s.size()][n];
    memset(dp, 0, sizeof(dp));
    dp[0][(s[0] - '0') % n]++;
    for(int i = 1; i < s.size(); ++i){
        dp[i][(s[i] - '0') % n]++;
        for(int j = 0; j < n; ++j){
            dp[i][j] += dp[i - 1][j];
            dp[i][(j * 10 + (s[i] - '0')) % n] += dp[i - 1][j];
        }
    }
    return dp[s.size() - 1][0];
}

int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        string s; cin >> s;
        cout << countDivisible(s, n) << endl;
    }
}