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
int dp[1005];

int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(auto &num : a) cin >> num;
        memset(dp, 0, sizeof(dp));
        foru(i, 0, n - 1){
            foru(j, i + 1, min(i + a[i], n - 1)){
                if(!dp[j]) dp[j] = INT_MAX;
                dp[j] = min(dp[j], dp[i] + 1);
            }
            if(i + a[i] >= n - 1) break;
        }
        cout << dp[n - 1] << endl;
    }
}