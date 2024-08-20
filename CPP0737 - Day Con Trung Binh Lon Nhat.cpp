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
        ll n, k, tmp = 0; cin >> n >> k;
        vector<ll> v(n);
        foru(i, 0, n - 1){
            cin >> v[i];
            if(i < k) tmp += v[i];
        }
        ll ans = LLONG_MIN;
        int idx = 0;
        ans = max(ans, tmp);
        foru(i, k, n - 1){
            tmp += v[i];
            tmp -= v[i - k];
            if(ans < tmp){
                ans = tmp;
                idx = i - k + 1;
            }
        }
        foru(i, idx, idx + k - 1){
            cout << v[i] << ' ';
        }
        cout << endl;
    }
}