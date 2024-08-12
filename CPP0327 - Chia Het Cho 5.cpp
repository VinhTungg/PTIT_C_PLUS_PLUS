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

string check(string s){
    int ans = 0;
    for(auto &bit : s){
        ans = (ans * 2 + (bit - '0')) % 5;
    }
    return (ans == 0) ? "Yes\n" : "No\n";
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        string s; cin >> s;
        cout << check(s);
    }
}