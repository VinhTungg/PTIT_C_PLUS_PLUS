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
ll x, y, p;

ll binPow(int a, int b){
    if(b == 0) return 1;
    ll res = binPow(a, b / 2);
    (res *= res) %= p;
    if(b & 1) (res *= a) %= p;
    return res;
}
 
int main(){
    boost;
    int t = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        cin >> x >> y >> p;
        ll ans = binPow(x, y);
        cout << ans << endl;
    }
}