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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &num : v) cin >> num;
        int ans = 0;
        bool check = true;
        while(check){
            check = false;
            foru(i, 0, n - 1){
                if(v[i] & 1){
                    --v[i];
                    ++ans;
                }
                if(v[i]) check = true;
            }
            foru(i, 0, n - 1){
                v[i] /= 2;
            }
            if(check == false) break;
            ++ans;
        }
        cout << ans << endl;
    }
}