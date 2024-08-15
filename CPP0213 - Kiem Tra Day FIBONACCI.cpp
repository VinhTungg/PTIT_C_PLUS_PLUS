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
ll F[92];
vector<bool> kt(1005, false);

void init(){
    F[0] = F[1] = 1;
    kt[0] = kt[1] = true;
    foru(i, 2, 16) {
        F[i] = F[i - 1] + F[i - 2];
        kt[F[i]] = true;
    }
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    init();
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n), ans;
        for(auto &num : v) cin >> num;
        for(auto &num : v) if(kt[num]) ans.pb(num);
        for(auto &num : ans) cout << num << ' ';
        cout << endl;
    }
}