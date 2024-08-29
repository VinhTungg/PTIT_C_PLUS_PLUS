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

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> p[n];
        for(int i = 0; i < n; ++i){
            cin >> p[i].first;
            p[i].second = i;
        }
        int cnt[n] = {};
        int ans = 0;
        sort(p, p + n);
        for(int i = 0; i < n; ++i){
            if(p[i].second == i || cnt[i]) continue;
            int j = i;
            while(!cnt[j]){
                cnt[j] = 1;
                j = p[j].second;
                ++ans;
            }
            --ans;
        }
        cout << ans << endl;
    }
}