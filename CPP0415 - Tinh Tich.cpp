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
        int n, m;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        sort(all(a)); sort(all(b));
        cout << 1LL * a[a.sz() - 1] * b[0] << endl;
    }
}