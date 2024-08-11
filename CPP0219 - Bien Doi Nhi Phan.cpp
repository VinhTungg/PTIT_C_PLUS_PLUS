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
        int n, m; cin >> n >> m;
        int a[n + 5][m + 5], b[n + 5][m + 5] = {};
        foru(i, 0, n - 1) foru(j, 0, m - 1) cin >> a[i][j];
        foru(i, 0, n - 1) foru(j, 0, m - 1){
            if(a[i][j]){
                foru(k, 0, n) b[k][j] = 1;
                foru(k, 0, m - 1) b[i][k] = 1;
            }
        }
        foru(i, 0, n - 1){ 
            foru(j, 0, m - 1) cout << b[i][j] << ' ';
            cout << endl;
        }
    }
}