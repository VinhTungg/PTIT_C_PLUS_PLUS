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
int n, k;
ll dp[1005][1005];

void init(){
    foru(i, 0, 1000){
        foru(j, 0, i){
            if(j == 0 || j == i) dp[i][j] = 1;
            else{
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
                dp[i][j] %= MOD;
            }
        }
    }
}

int main(){
    boost;
    init();
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        cout << dp[n][k] << endl;
    }
}