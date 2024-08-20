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
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        vector<int> a1(n), a2(m);
        for(auto &num : a1){
            cin >> num;
            mp[num]++;
        }
        for(auto &num : a2) cin >> num;
        for(auto &num : a2){
            if(mp.find(num) != mp.end()){
                foru(i, 1, mp[num]) cout << num << ' ';
                mp.erase(num);
            }
        }
        for(auto &num : mp){
            foru(i, 1, num.second) cout << num.first << ' ';
        }
        cout << endl;
    } 
}