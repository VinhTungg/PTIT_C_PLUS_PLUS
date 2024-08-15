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

bool cmp(int a, int b){
    return abs(a) < abs(b);
}
 
int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &num : a){
            cin >> num;
        }
        int res = 1e9;
        foru(i, 0, n - 2){
            foru(j, i + 1, n - 1)
                if(abs(res) > abs(a[i] + a[j])) res = a[i] + a[j];
        }
        cout << res << endl;
    }
}