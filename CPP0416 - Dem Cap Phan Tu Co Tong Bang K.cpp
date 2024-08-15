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
        ll n, sum; cin >> n >> sum;
        vector<ll> Nums(n);
        for(auto &Num : Nums){
            cin >> Num;
        }
        ll ans = 0;
        foru(i, 0, n - 2){
            foru(j, i + 1, n - 1) if(Nums[i] + Nums[j] == sum) ++ans;
        }
        cout << ans << endl;
    }
}