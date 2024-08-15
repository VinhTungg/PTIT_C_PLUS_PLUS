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
int x;
bool cmp(int a, int b){
    return abs(x - a) < abs(x - b);
}

int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n >> x;
        vector<int> v(n);
        for(auto &num : v) cin >> num;
        sort(all(v), cmp);
        for(auto &num : v) cout << num << ' ';
        cout << endl;
    }
}