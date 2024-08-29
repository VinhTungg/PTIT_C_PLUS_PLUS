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
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt[15] = {};
        vector<pair<int, int>> chan, le;
        for(auto &c : s) cnt[c - '0']++;
        for(int i = 0; i < 10; ++i){
            if(cnt[i] & 1) le.push_back(make_pair(i, cnt[i]));
            else{
                if(cnt[i] > 0) chan.pb(mk(i, cnt[i]));
            }
        }
        if(!le.empty()) sort(all(le), [](pair<int, int> a, pair<int, int> b){
            return a.second != b.second ? a.second > b.second : a.first > b.first;
        });
        string ans = "";
        if(!chan.empty()){
            for(int i = chan.size() - 1; i >= 0; --i){
                ans += string(chan[i].second / 2, '0' + chan[i].first);
            }
        }
        if(ans[0] == '0') ans = "";
        if(ans.size() == 0 && !le.empty() && le[0].first == 0) le.erase(le.begin());
        if(!le.empty()) {
            for(int i = 1; i <= le[0].second; ++i) ans += (le[0].first + '0');
        }
        if(!chan.empty()){
            string tmp = "";
            for(int i = chan.size() - 1; i >= 0; --i){
                tmp += string(chan[i].second / 2, '0' + chan[i].first);
            }
            if(tmp[0] == '0') tmp = "";
            reverse(all(tmp));
            ans += tmp;
        }
        cout << ans << endl;
    }
}