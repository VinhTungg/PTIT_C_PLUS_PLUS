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
int n, dp[1005];

int main(){
    boost;
    int t; cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        foru(i, 0, n - 1){
            dp[i] = 1;
            foru(j, 0, i - 1){
                if(v[j] < v[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        cout << *max_element(dp, dp + n) << endl;
    }
}