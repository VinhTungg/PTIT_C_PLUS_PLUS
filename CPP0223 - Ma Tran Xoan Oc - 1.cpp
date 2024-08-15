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
        ll a[n+1][m+1];
        foru(i, 0, n - 1) foru(j, 0, m - 1) cin >> a[i][j];
        int h1 = 0,h2=n-1,c1=0,c2=m-1;
        int cnt = 0;
        int nums[n * m + 1];
        while(h1<=h2 && c1<=c2){
            foru(i,c1,c2){
                nums[cnt] = a[h1][i];
                ++cnt;
            }
            ++h1;
            foru(i,h1,h2){
                nums[cnt] = a[i][c2];
                ++cnt;
            }
            --c2;
            if(c1<=c2){
                for(int i= c2; i>=c1;--i){
                    nums[cnt] = a[h2][i];
                    ++cnt;
                }
            }
            --h2;
            if(h2>=h1){
                for(int i=h2;i>=h1;--i){
                    nums[cnt] = a[i][c1] ;
                    ++cnt;
                }
            ++c1;
            }
        }
        foru(i,0,n * m - 1){
            cout << nums[i] << ' ';
        }
        cout << endl;
    }
}