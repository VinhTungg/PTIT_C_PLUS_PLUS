#include <bits/stdc++.h>
#define ll long long
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

using namespace std;

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n; cin >> n; vector<ll> v(n);
        ll ans = LONG_LONG_MAX;
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end());
        for(int i = 1; i < v.size(); ++i) ans = min(ans, v[i] - v[i - 1]);
        cout << ans << endl;
    }
}