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

int binary_search(int n, int x, vector<int> a){
    int l = 0, r = n - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] == x) return mid;
        //Tìm kiếm mảng đã được sắp xếp
        if(a[l] <= a[mid]){
            if(a[l] <= x && a[mid] > x) r = mid - 1;
            else l = mid + 1;
        }else{
            if(a[r] >= x && x > a[mid]) l = mid + 1;
            else r = mid - 1;
        }
    }
}
 
int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(auto &num : a){
            cin >> num;
        }
        int ans = binary_search(n, x, a);
        cout << ans + 1 << endl;
    }
}