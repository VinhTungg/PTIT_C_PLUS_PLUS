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

long long combination(int n, int k) {
    ll res = 1;
    for(int i = 1; i <= k; ++i, --n){
        (res *= n) /= i;
    }
    return res;
}

long long calc(int n, int take, int p1, int p2) {
    ll res = 0;
    for(int i = take; i <= n - p1 - p2; ++i){
        res += combination(n, i);
        res += pow(3, n - res);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r, b, g;
        cin >> n >> r >> b >> g;
        ll ans = 0;
        ans = calc(n, r, b, g) + calc(n, b, r, g) + calc(n, g, b, r);
        cout << ans << endl;
    }
}
