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
        ll n, k; cin >> n >> k;
        ll v[n];
        foru(i, 0, n - 1) cin >> v[i];
        sort(v, v + n);
        ll ans = 0;
        foru(i, 0, n - 1){
            auto it = lower_bound(v + i + 1, v + n, k + v[i]);
            int x = it - v - i - 1;
            ans += x;
        }
        cout << ans << endl;
    }
}