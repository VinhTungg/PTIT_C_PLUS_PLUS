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
        int k; cin >> k;
        int ans = 0;
        foru(i, 0, s.size() - 1){
            unordered_set<char> unorset;
            foru(j, i, s.size() - 1){
                unorset.insert(s[j]);
                if(unorset.size() == k) ++ans;
            }
        }
        cout << ans << endl;
    }
}