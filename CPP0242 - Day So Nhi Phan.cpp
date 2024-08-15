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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(auto &num : a) cin >> num;
        for(auto &num : b) cin >> num;
        int ans = 0;
        foru(l, 0, n - 1){
            int sumA = a[l], sumB = b[l];
            foru(r, l, n - 1){             
                if(r != l){
                    if(a[r]) sumA++;
                    if(b[r]) sumB++;
                }
                if(sumA == sumB) {
                    ans = max(r - l + 1, ans);
                }
            }
        }
        cout << ans << endl;
    }
}