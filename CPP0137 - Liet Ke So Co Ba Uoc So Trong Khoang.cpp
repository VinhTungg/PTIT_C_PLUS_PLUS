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
vector<bool> nt(1000001, true);
int prefix[1000001] = {};

void init(){
    nt[0] = nt[1] = false;
    foru(i, 2, 1000){
        if(nt[i]){
            for(int j = i + i; j <= 1000000; j += i){
                nt[j] = false;
            }
        }
    }
    foru(i, 2, 1000000){
        prefix[i] = prefix[i - 1] + (nt[i] == true);
    }
}

int main(){
    boost;
    int t = 1; 
    cin >> t;
    init();
    while(t--){
        ll l, r;
        cin >> l >> r;
        l = sqrt(l) - 1;
        r = sqrt(r);
        cout << prefix[r] - prefix[l] << endl;
    }
}