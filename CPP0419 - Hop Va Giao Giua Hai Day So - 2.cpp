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
        set<int> a, b, hop, giao;
        foru(i, 0, n - 1){
            int x; cin >> x;
            a.insert(x);
            hop.insert(x);
        }
        foru(i, 0, m - 1){
            int x; cin >> x;
            b.insert(x);
            hop.insert(x);
        }
        for(auto &x : hop){
            if(a.find(x) != a.end() && b.find(x) != b.end()) giao.insert(x);
            cout << x << ' ';
        }
        cout << endl;
        for(auto &x : giao) cout << x << ' ';
        cout << endl;
    }
}