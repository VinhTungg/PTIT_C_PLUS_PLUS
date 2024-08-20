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
int dpUp[101], dpDown[101];

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        dpUp[0] = 1;
        foru(i, 0, n - 1){
            dpUp[i] = 1;
            foru(j, 0, i - 1){
                if(a[j] < a[i]) dpUp[i] = max(dpUp[i], dpUp[j] + 1);
            }
        }
        ford(i, n - 1, 0){
            dpDown[i] = 1;
            ford(j, n - 1, i + 1){
                if(a[j] < a[i]) dpDown[i] = max(dpDown[i], dpDown[j] + 1);
            }
        }
        int ans = 0;
        foru(i, 0, n - 1) ans = max(ans, dpUp[i] + dpDown[i] - 1);
        cout << ans << endl;
    }
}