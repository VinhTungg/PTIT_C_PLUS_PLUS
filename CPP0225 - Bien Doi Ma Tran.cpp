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
        int n;
        cin >> n;
        int a[n + 1][n + 1], cot[n + 1] = {}, hang[n + 1] = {}, sum = 0;
        foru(i, 1, n){
            foru(j, 1, n){
                cin >> a[i][j];
                hang[i] += a[i][j];
                cot[i] += a[i][j];
                sum = max({sum, hang[i], cot[j]});
            }
        }
        int ans = 0;
        foru(i, 1, n){
            foru(j, 1, n){
                int tmp = sum - max(hang[i], cot[j]);
                hang[i] += tmp;
                cot[j] += tmp;
                ans += tmp;
            }
        }
        cout << ans << endl;
    }
}