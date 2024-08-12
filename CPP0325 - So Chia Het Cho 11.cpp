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

int check(string s){
    int chan = 0, le = 0;
    foru(i, 0, s.size() - 1){ 
        if((i + 1) & 1) le += (s[i] - '0');
        else chan += (s[i] - '0');
    }
    return (le - chan) % 11 == 0;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        string s; cin >> s;
        cout << check(s) << '\n';
    }
}