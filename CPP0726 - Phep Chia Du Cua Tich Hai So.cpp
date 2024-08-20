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

ll binPow(ll a, ll b, ll c){
    if(b == 1) return a;
    ll res = binPow(a, b / 2, c);
    (res += res) %= c;
    if(b & 1) (res += a) %= c;
    return res;
}

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        ll a, b, c; cin >> a >> b >> c;
        ll ans = binPow(a, b, c);
        cout << ans << endl;
    }
}