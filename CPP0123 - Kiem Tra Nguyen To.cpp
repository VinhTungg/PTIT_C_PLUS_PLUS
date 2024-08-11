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

string checkNT(ll n){
    if(n == 1 || n == 0) return "NO\n";
    foru(i, 2, sqrt(n)) if(n % i == 0) return "NO\n";
    return "YES\n";
}

int main(){
    boost;
    int t = 1;
    //cin >> t;
    while(t--){
    	int n; cin >> n;
        cout << checkNT(n);
	}
}