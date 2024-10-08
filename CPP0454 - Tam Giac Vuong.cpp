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
        ll v[n];
        for(auto &num : v) cin >> num;
        sort(v, v + n);
        string ans = "NO\n";
        foru(i, 0, n - 3){
            foru(j, i + 1, n - 2){
                ll canh = sqrt(v[i] * v[i] + v[j] * v[j]);
                if(canh * canh == v[i] * v[i] + v[j] * v[j]){
                    if(binary_search(v + j + 1, v + n, canh)) ans = "YES\n";
                }
            }
        }
        cout << ans;
    }
}