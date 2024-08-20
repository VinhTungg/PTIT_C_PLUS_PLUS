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
        string s; cin >> s;
        int cnt = 0, ans = 0;
        ford(i, s.size() - 1, 0){
            cnt += (s[i] == '0' ? 1 : 0);
            if(s[i] == '1'){
                if(cnt > 1){
                    ans += 3;
                    cnt -= 2;
                }
            }
        }
        cout << ans << endl;
    }
}