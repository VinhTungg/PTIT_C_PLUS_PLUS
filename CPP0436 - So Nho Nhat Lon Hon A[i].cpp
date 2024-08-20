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
        vector<int> ans = nums;
        sort(all(nums));
        unordered_map<int, int> mp;
        foru(i, 0, n - 2) mp[nums[i]] = nums[i + 1];
        foru(i, 0, n - 1){
            if(ans[i] == nums[nums.size() - 1]) cout << "_ ";
            else cout << mp[ans[i]] << ' ';
        }
        cout << endl;
    }
}