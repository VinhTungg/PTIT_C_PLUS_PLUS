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

int solve(string s, int k){
    int ans = 0;
    foru(i, 0, s.size() - 1){
        int n = 0;
        foru(j, i, s.size() - 1){
            n = n * 10 + (s[j] - '0');
            n %= k;
            if(n == 0) ++ans;
        }
    }
    return ans;
}

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        string s; cin >> s;
        cout << solve(s, 8) - solve(s, 24) << endl;
    }
}