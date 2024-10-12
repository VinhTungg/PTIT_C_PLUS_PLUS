#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool check(ll s,ll x){
    int ans = 0;
    while(s){
        ans += (s % 10);
        s /= 10;
    }
    return ans == x;
}

int main(){
    ll a, b, c;
    cin >> a >> b >> c;
    vector<ll> v;
    for(ll i = 1; i <= 1000; ++i){
        ll tmp = b * pow(i, a) + c;
        if(tmp >= 0 and tmp <= 1e9 and check(tmp, i)){
            v.push_back(tmp);
        }
    }
    cout << v.size() << endl;
    for(auto &x : v) cout << x << ' ';
}