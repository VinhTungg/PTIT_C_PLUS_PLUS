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
        int cnt[26] = {};
        for(auto &c : s) cnt[c - 'a']++;
        int check = 1;
        foru(i, 0, 25) if(cnt[i] > (s.size() / 2) + (s.size() % 2)) check = 0;
        cout << check << endl;
    }
}