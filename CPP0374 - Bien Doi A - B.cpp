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
    //cin >> t;
    while(t--){
        string s; cin >> s;
        int cnt1 = 0, cnt2 = 0;
        foru(i, 0, s.size() - 1){
            if(s[i] == 'A') continue;
            else{
                ++cnt1;
                while(i < s.size() and s[i] == 'B'){
                    ++cnt2;
                    ++i;
                }
            }
        }
        cout << min(cnt1 * 2 - (s[0] == 'B'), cnt2);
    }
}