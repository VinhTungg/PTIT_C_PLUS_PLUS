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
        int n, m, p; cin >> n >> m >> p;
        int a[n + 5][m + 5], b[m + 5][p + 5];
        foru(i, 0, n - 1) foru(j, 0, m - 1) cin >> a[i][j];
        foru(i, 0, m - 1) foru(j, 0, p - 1) cin >> b[i][j];
        foru(i, 0, n - 1){
             ll sum = 0;
            int cnt = n;
            int idx = 1;
            while(cnt--)
            {
                sum = 0;
                foru(j, 0, m - 1) sum += a[i][j] * b[j][idx];
                cout << sum << ' ';
                ++idx;
            }
            cout << endl;
        }
    }
}