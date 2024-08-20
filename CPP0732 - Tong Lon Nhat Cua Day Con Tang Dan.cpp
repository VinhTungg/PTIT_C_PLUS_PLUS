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
ll dp[1005];

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n];
        for(auto &x : a) cin >> x;
        foru(i, 0, n - 1){
            dp[i] = a[i];
            foru(j, 0, i - 1){
                if(a[j] < a[i]) dp[i] = max(dp[i], dp[j] + a[i]);
            }
        }
        cout << *max_element(dp, dp + n) << endl;
    }
}