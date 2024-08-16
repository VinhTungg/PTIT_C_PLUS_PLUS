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

bool check(string s){
    int l = 0, r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}

int main(){
    string s;
    unordered_map<string, int> mp;
    while(cin >> s){
        if(check(s) and s.size() > 1){
            mp[s]++;
        }
    }
    vector<string> v;
    for(auto &x : mp) v.pb(x.first);
    sort(all(v), [](string a, string b){
        return a.size() != b.size() ? a.size() > b.size() : a > b;
    });
    for(auto &x : v) cout << x << ' ' << mp[x] << endl;
}   