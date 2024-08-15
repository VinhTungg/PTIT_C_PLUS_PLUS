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
        int n; cin >> n;
        vector<int> v(n);
        ll preleft = 0, preright = 0;
        for(auto &num : v){
            cin >> num;
            preright += num;
        }
        int idx = -1;
        preright -= v[0];
        if(n == 1){
            cout << 1;
            continue;
        }
        foru(i, 1, n - 1){
            preleft += v[i - 1];
            preright -= v[i];
            if(preleft == preright){
                idx = i + 1;
                break;
            }
        }
        cout << idx << endl;
    }
}