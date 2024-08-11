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
int t;
double ans;
string Ma101 = "ABBADCCABDCCABD",
Ma102 = "ACCABCDDBBCDDBB";

int main(){
    cin >> t;
    while(t--){
        string x; cin >> x;
        ans = 0;
        if(x == "101"){
            foru(i, 0, 14){
                char tmp; cin >> tmp;
                ans += (tmp == Ma101[i]) ? 1.0 * 10 / 15 : 0;
            }
        }else{
            foru(i, 0, 14){
                char tmp; cin>> tmp;
                ans += (tmp == Ma102[i]) ? 1.0 * 10 / 15 : 0;
            }
        }
        cout << fixed << setprecision(2) << ans << endl;
    }
}