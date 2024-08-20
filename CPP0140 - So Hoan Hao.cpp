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

int check(ll n){
    if(n > 1e12) return 0;
    int i = 2;
    ll ans = 1;
    double tmp = sqrt(n);
    while(i < tmp){
        if(!(n % i)){
            ans += i;
            ans += (n / i);
        }
        ++i;
    }
    tmp = (int)tmp;
    if(tmp * tmp == n) ans += tmp;
    return ans == n;
}

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << check(n) << endl;
    }
}