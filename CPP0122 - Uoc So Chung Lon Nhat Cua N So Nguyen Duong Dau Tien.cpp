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
ll dp[100005];

ll lcm(ll a, ll b){
    return a * b / __gcd(a, b);
}

void init(){
    dp[1] = 1;
    for(ll i = 2; i <= 100000; ++i){
        dp[i] = lcm(i, dp[i - 1]);
    }
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    init();
    while(t--){
    	int n; cin >> n;
        cout << dp[n] << endl;
	}
}