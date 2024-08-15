#include <bits/stdc++.h>
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1e9+7
#define ll long long
#define foru(i,a,b) for(int i=a;i<=b;++i)
using namespace std;

int main(){
	int n;
	cin >> n;
    vector<int> v(n * n);
    for(auto &num : v) cin >> num;
    sort(v.begin(), v.end());
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	int cnt = 0;
	ll a[n+1][n+1];
	while(h1 <= h2 && c1 <= c2){
	    foru(i, c1, c2){
			a[h1][i] = v[cnt];
			++cnt;
		}
		++h1;
		foru(i, h1, h2){
			a[i][c2] = v[cnt];
			++cnt;
		}
		--c2;
		if(c1 <= c2){
			for(int i = c2; i >= c1; --i){
                a[h2][i] = v[cnt];
                ++cnt;
			}
		}
		--h2;
		if(h2 >= h1){
			for(int i = h2; i >= h1; --i){
                a[i][c1] = v[cnt];
                ++cnt;
			}
		++c1;
		}
	}
	foru(i, 0, n-1){
		foru(j, 0, n-1){
			cout << a[i][j] << " ";
		}
	    cout << "\n";
	}
}