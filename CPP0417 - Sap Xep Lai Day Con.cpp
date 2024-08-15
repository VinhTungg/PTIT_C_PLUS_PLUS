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
        vector<pair<int, int>> v(n);
        foru(i, 0, n - 1){
            cin >> v[i].first;
            v[i].se = i;
        }
        sort(v.begin(), v.end());
        int min_idx = n,max_idx = 0;
        foru(i, 0, n - 1){
            if(i != v[i].se){
                min_idx = min(min_idx, v[i].se);
                max_idx = max(max_idx, v[i].se);
            }
        }
        cout << min_idx + 1 << ' ' << max_idx + 1 << endl;
    }
}