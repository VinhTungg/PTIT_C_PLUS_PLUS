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
        int x, y, z, n; cin >> x >> y >> z >> n;
        ll boiChung = x * y / __gcd(x, y);
        boiChung = boiChung * z / __gcd(boiChung, (ll)z);
        if(boiChung >= pow(10, n)) cout << "-1\n";
        else{
            ll tmp = pow(10,n - 1) / boiChung;
            ll du = (ll)pow(10, n - 1) % boiChung;
            boiChung *= tmp + (du != 0);
            cout << boiChung << endl;
        }
    }
}