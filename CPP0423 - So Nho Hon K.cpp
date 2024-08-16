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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int cntLess = 0;
        int min_idx = INT_MAX, max_idx = INT_MIN;
        for(auto &num : v){
            cin >> num;
            if(num <= k) ++cntLess;
        }
        int cntNum = 0;
        foru(i, 0, cntLess - 1) if(v[i] <= k) ++cntNum;
        int ans = cntNum;
        foru(i, cntLess, v.size() - 1){
            if(v[i] <= k) ++cntNum;
            if(v[i - cntLess - 1] <= k) --cntNum;
            ans = max(ans, cntNum);
        }
        cout << cntLess - ans << endl;
    }
}