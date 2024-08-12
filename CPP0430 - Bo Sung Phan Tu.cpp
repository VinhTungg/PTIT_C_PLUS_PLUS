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
        vector<int> v(n), cnt(1005, 0);
        int l = INT_MAX, r = 0;
        for(auto &num : v){
            cin >> num;
            l = min(l, num);
            r = max(r, num);
            cnt[num]++;
        }
        int ans = 0;
        foru(i, l + 1, r - 1){
            if(!cnt[i]) ++ans;
        }
        cout << ans << endl;
    }
}