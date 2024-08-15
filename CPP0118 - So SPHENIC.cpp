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

int calc(int n){
    int cnt = 0;    
    foru(i, 2, sqrt(n)){
        int mu = 0;
        while(n % i == 0){
            n /= i;
            ++mu;
            ++cnt;
        }
        if(mu > 1) return 0;
    }
    if(n) cnt++;
    return cnt == 3;
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n; cin >> n;
        cout << calc(n) << endl;
    }
}