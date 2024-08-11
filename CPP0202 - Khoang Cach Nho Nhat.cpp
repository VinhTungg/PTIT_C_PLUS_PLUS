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
        int n; cin >> n; vector<ll> v(n);
        ll ans = LONG_LONG_MAX;
        for(auto &x : v) cin >> x;
        sort(all(v));
        foru(i, 1, v.size() - 1) ans = min(ans, v[i] - v[i - 1]);
        cout << ans << endl;
    }
}