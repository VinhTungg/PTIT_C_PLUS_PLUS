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
        vector<ll> v(n);
        for(auto &num : v) cin >> num;
        ll tmp = 0, ans = LLONG_MIN;
        foru(i, 0, n - 1){
            tmp = max(v[i], tmp + v[i]);
            ans = max(ans, tmp);
        }
        cout << ans << endl;
    }
}