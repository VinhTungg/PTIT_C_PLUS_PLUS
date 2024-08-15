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
        int n; cin >> n;
        vector<int> nums(n);
        for(auto &num : nums) cin >> num;
        int ans = -1e9, tmp = nums[0];
        foru(i, 1, n - 1){
            ans = max(ans, nums[i] - tmp);
            tmp = min(tmp, nums[i]);
        }
        if(ans) cout << ans << endl;
        else cout << "-1\n";
    }
}