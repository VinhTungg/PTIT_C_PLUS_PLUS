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
        int n; cin >> n;
        vector<ll> v(n), ans(n);
        for(auto &num : v) cin >> num;
        ans[0] = v[0] * v[1];
        ans[n - 1] = v[n - 1] * v[n - 2];
        foru(i, 1, n - 2){
            ans[i] = v[i - 1] * v[i + 1];
        }
        for(auto &num : ans) cout << num << ' ';
        cout << endl;
    }
}