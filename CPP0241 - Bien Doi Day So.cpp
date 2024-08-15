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
        vector<int> nums(n);
        for(auto &num : nums) cin >> num;
        int l = 0, r = n - 1;
        int ans = 0;
        while(l <= r){
            if(nums[l] < nums[r]){
                nums[l + 1] += nums[l];
                ++l;
                ++ans;
            }else if(nums[l] > nums[r]){
                nums[r - 1] += nums[r];
                --r;
                ++ans;
            }else{
                ++l, --r;
            }
        }
        cout << ans << endl;
    }
}