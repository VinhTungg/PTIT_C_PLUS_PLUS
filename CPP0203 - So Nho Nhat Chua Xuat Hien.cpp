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
        sort(all(nums));
        int idx = 1;
        foru(i, 0, n - 1){
            if(nums[i] > idx){
                cout << idx << endl;
                idx = 0;
                break;
            }else if(nums[i] == idx) ++idx;
        }
        if(idx) cout << idx << endl;
    }
}