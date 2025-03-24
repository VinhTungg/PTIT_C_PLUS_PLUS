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
        ll n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        ll a[n1], b[n2], c[n3];
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;
        int n = min({n1, n2, n3});
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        set<ll> s;
        while(cnt1 < n1 and cnt2 < n2 and cnt3 < n3){
            if(a[cnt1] == b[cnt2] && b[cnt2] == c[cnt3]){
                s.insert(a[cnt1]);
                ++cnt1; ++cnt2; ++cnt3;
            }
            while(a[cnt1] < b[cnt2] || a[cnt1] < c[cnt3]) ++cnt1;
            while(b[cnt2] < a[cnt1] || b[cnt2] < c[cnt3]) ++cnt2;
            while(c[cnt3] < b[cnt2] || c[cnt3] < a[cnt1]) ++cnt3;
        }
        if(s.empty()) cout << -1;
        else for(auto &x : s) cout << x << ' ';
        cout << endl;
    }
}
