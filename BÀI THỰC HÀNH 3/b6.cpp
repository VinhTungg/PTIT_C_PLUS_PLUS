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
        int n;
        cin >> n;
        int a[n + 1];
        foru(i, 1, n) cin >> a[i];
        sort(a + 1, a + n + 1, greater<int>());
        foru(i, 1, n / 2){
            cout << a[i] << ' ';
            cout << a[n - i + 1] << ' ';
        }
        if(n & 1) cout << a[n / 2 + 1];
        cout << endl;
    }
}