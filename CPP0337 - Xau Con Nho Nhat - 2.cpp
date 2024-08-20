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
        string s; cin >> s;
        unordered_set<char> s1(s.begin(), s.end());
        int l = 0;
        unordered_map<char, int> mp;
        int ans = INT_MAX;
        foru(r, 0, s.size() - 1){
            mp[s[r]]++;
            while(mp.size() == s1.size()){
                ans = min(ans, r - l + 1);
                mp[s[l]]--;
                if(!mp[s[l]]) mp.erase(s[l]);
                ++l;
            }
        }
        cout << ans << endl;
    }
}