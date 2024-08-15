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
        int n, m;
        cin >> n;
        int a[n + 5][n + 5] = {};
        foru(i, 1, n){
            foru(j, 1, n) cin >> a[i][j];
        }
        cin >> m;
        int b[m + 5][m + 5] = {};
        foru(i, 1, m) foru(j, 1, m) cin >> b[i][j];
        if(n % m == 0){
            foru(i, 1, n){
                foru(j, 1, n){
                    int idxi = i, idxj = j;
                    if(idxi > m) idxi /= m;
                    if(idxj > m) idxj /= m;
                    a[i][j] *= b[idxi][idxj];
                    cout << a[i][j] << ' ';
                }
                cout << endl;
            }
        }
    }
}