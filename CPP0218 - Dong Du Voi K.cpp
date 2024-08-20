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

int check(int n, vector<int> &a){
    foru(i, 1, n - 1){
        a[i] = abs(a[i] - a[0]);
    }
    a[0] = 0;
    int du = a[0];
    foru(i, 0, n - 1){
        du = __gcd(du, a[i]);
    }
    return du;
}

int main(){
    boost;
    int t = 1; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &num : v) cin >> num;
        int du = check(n, v);
        int ans = 0;
        for(int i = 1; i <= sqrt(du); ++i){
            if(du % i == 0){
                ans += 2;
                if(i * i == du) ans--;
            } 
        }
        cout << ans << endl;
    }
}