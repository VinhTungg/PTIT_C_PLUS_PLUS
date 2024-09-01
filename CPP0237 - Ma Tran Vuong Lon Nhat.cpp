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
    int t; cin >> t;
    while(t--){
        int hang[25][25] = {}, cot[25][25] = {};
        int n;
        cin >> n;
        char a[n + 1][n + 1] = {};
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j){
                cin >> a[i][j];
                if(a[i][j] == 'X'){
                    hang[i][j] = hang[i][j - 1] + 1;
                    cot[i][j] = cot[i - 1][j] + 1;
                }
            }
        }
        int ans = 0;
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= n; ++j){
                int sqr = min(cot[i][j], hang[i][j]);
                for(int k = sqr; k >= 1; --k){
                    if(hang[i - k + 1][j] >= k && cot[i][j - k + 1] >= k){
                        if(ans < k){
                            ans = k;
                            break;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }
}