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
        int n, k; cin >> n >> k;
        vector<ll> nums(n);
        for(auto &num : nums) cin >> num;
        vector<ll> prefixSum(n + 1);
        prefixSum[0] = 0;
        prefixSum[1] = nums[0];
        foru(i, 2, n){
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        }
        while(k--){
            int l, r;
            cin >> l >> r;
            cout << prefixSum[r] - prefixSum[l - 1] << endl;
        }
    }
}