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

ll binPow(ll a, ll b, ll m){
    if(b == 0) return 1;
    if(b == 1) return a;
    ll res = binPow(a, b / 2, m);
    if(b & 1) res = (res * res * a) % m;
    else res = (res * res) % m;
    return res % m;
}

ll ChiaDu(string s, ll m){
    ll ans = 0;
    for(auto &c : s){
        ans = (ans * 10 + (c - '0')) % m;
    }
    return ans;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        string s; cin >> s;
        ll b; cin >> b;
        ll m; cin >> m;
        ll ans = ChiaDu(s, m);
        ans = binPow(ans, b, m);
        cout << ans << endl;
    }
}