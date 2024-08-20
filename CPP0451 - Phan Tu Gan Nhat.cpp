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
        int n, k, x; cin >> n;
        vector<int> v(n);
        for(auto &num : v) cin >> num;
        cin >> k >> x;
        vector<int> ans;
        int tmp = lower_bound(all(v), x) - v.begin();
        int l , r;
        if(v[tmp] == x){
            l = tmp - 1;
            r = tmp + 1;
        }else{
            l = tmp - 1;
            r = tmp;
        }
        ford(i, k / 2 - 1, 0) cout << v[l - i] << ' ';
        foru(i, 0, k / 2 - 1) cout << v[r + i] << ' ';
        cout << endl;
    }
}