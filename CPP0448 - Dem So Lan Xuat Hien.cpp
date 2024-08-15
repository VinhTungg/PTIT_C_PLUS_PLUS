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
        int n, k;
        cin >> n >> k;
        vector<int> a(n), cnt(1000006, 0);
        for(auto &num : a) {
            cin >> num;
            cnt[num]++;
        }
        if(!cnt[k]) cout << "-1\n";
        else cout << cnt[k] << endl;
    }
}