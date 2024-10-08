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

int binary_search(int n, int x, vector<int> &a){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == x) return 1;
        if(a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
 
int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(auto &num : a) cin >> num;
        sort(all(a));
        auto tmp = binary_search(n, k, a);
        cout << tmp << endl;
    }
}