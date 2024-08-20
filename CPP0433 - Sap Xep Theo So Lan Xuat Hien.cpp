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

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        int n; cin >> n;
        unordered_map<int, int> mp;
        vector<pair<int, int>> vp;
        foru(i, 0, n - 1){
            int x; cin >> x;
            mp[x]++;
        }
        for(auto &x : mp){
            vp.push_back(mk(x.first, x.second));
        }
        sort(vp.begin(), vp.end(), cmp);
        for(auto &p : vp){
            foru(i, 0, p.second - 1) cout << p.first << ' ';
        }
        cout << endl;
    }
}