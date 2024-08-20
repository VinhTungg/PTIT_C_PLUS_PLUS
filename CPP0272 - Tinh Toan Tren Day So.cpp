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

ll binPow(ll a, ll b){
    if(b == 0) return 1;
    ll res = binPow(a, b / 2);
    (res *= res) %= MOD;
    if(b & 1) (res *= a) %= MOD;
    return res;
}

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n];
        for(auto &num : a) cin >> num;
        ll uoc = a[0];
        foru(i, 1, n - 1) uoc = __gcd(uoc, a[i]);
        ll ans = 1;
        foru(i, 0, n - 1){
            (ans *= binPow(a[i], uoc)) %= MOD;
        }
        cout << ans << endl;
    } 
}