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
        foru(i, 1, n - 1){
            if(a[i]){
                if(a[i] == a[i + 1]){
                    a[i] *= 2;
                    a[i + 1] = 0;
                }
            }
        }
        sort(a + 1, a + n + 1);
        foru(i, 1, n) cout << a[i] << ' ';
        cout << endl;
    }
}