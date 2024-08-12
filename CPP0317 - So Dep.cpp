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
    for(int i = 0; i <= (s.size() - 1) / 2 - (s.size() & 1); ++i){
        if(s[i] != s[s.size() - 1 - i] || (s[i] - '0') & 1) return false;
    }
    if(s.size() & 1) if(s[(s.size() - 1) / 2] & 1) return false;
    return true;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)) puts("YES");
        else puts("NO");
    }
}