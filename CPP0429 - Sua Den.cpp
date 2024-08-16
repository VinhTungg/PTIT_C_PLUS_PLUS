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
    //cin >> t;
    while(t--){
        // cửa sổ trượt
        int n, k, b; cin >> n >> k >> b;
        vector<int> v(n + 1, 1);
        foru(i, 1, b){
            int x; cin >> x;
            v[x] = 0;
        }
        int mangTruot = 0;
        foru(i, 1, k){
            if(v[i]) ++mangTruot;
        }
        int ans = mangTruot;
        foru(i, k + 1, n){
            if(v[i]) ++mangTruot;
            if(v[i - k]) --mangTruot;
            ans = max(ans, mangTruot);
        }
        cout << k - ans << endl;
    }
}