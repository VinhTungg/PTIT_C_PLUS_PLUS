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
    int t; 
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int a[n + 1][m + 1];
        foru(i, 0, n - 1) foru(j, 0, m - 1) cin >> a[i][j];
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        vector<int> nums;
        while(h1 <= h2 && c1 <= c2){
            foru(i, c1, c2){
                nums.pb(a[h1][i]);
            }
            ++h1;
            foru(i, h1, h2){
                nums.pb(a[i][c2]);
            }
            --c2;
            if(h1 <= h2){
                for(int i = c2; i >= c1;--i){
                    nums.pb(a[h2][i]);
                }
                --h2;
            }
            if(c2 >= c1){
                for(int i = h2; i >= h1; --i){
                    nums.pb(a[i][c1]);
                }
                ++c1;
            }
        }
        cout << nums[k - 1] << endl;
    }
}