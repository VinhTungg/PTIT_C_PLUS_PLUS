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
ll t, n, k;

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ll a[n];
        for(auto &num : a) cin >> num;
        ll sum = a[0], ans = LLONG_MAX, l = 0;
        for(ll r = 1; r < n - 1; ++r){
            sum += a[r];
            while(sum > k){
                ans = min(ans, r - l + 1);
                sum -= a[l];
                ++l;
            }
        }
        if(ans != LLONG_MAX) cout << ans << endl;
        else cout << "-1\n";
    }
}