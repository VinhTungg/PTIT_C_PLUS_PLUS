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
        int cnt1 = 0, cnt2 = 0, ans;
        foru(i, 0, s.size() - 1){
            if(s[i] == 'A'){
                if(cnt1 < cnt2) cnt2 = cnt1 + 1;
                else ++cnt2;
            }else{
                if(cnt1 < cnt2) ++cnt1;
                else cnt1 = cnt2 + 1;
            }
        }
        ans = min(cnt1 * 2 - (s[0] == 'B'), cnt2);
        cout << cnt1;
    }
}