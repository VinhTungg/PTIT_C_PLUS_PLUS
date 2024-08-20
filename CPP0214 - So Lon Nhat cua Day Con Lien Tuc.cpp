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
        int n, k;
        cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        int l = 0, r = k - 1;
        map<int, int> mp;
        foru(i, 0, r) mp[a[i]]++;
        while(1){
            cout << mp.rbegin()->first << ' ';
            ++r;
            mp[a[r]]++;
            mp[a[l]]--;
            if(!mp[a[l]]) mp.erase(a[l]);
            ++l;
            if(l > n - k) break;
        }
        cout << endl;
    }
}