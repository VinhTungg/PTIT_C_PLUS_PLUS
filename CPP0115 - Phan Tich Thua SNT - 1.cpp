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
int t, n;

void PhanTich(int n){
    foru(i, 2, sqrt(n)){
        int cnt = 0;
        while(n % i == 0){
            n /= i;
            ++cnt;
            if(n % i){
                cout << i << ' ' << cnt << ' ';
            }
        }
    }
    if(n > 1) cout << n << ' ' << 1;
}

int main(){
    boost;
    cin >> t;
    while(t--){
        cin >> n;
        PhanTich(n);
        cout << endl;
    }
}