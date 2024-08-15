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
int n;
int a[1005] = {};
 
int main(){
    boost;
    int t = 1;
    cin >> t;
    while(t--){
        cin >> n;
        foru(i, 1, n){
            int x; cin >> x;
            a[i] = x;
        }
        int diem_gay = 0;
        ford(i, n - 1, 1){
            if(a[i] > a[i + 1]){
                diem_gay = i;
                break;
            }
        }
        if(diem_gay != 0){
            ford(i, n, diem_gay + 1){
                if(a[i] < a[diem_gay]){
                    swap(a[i], a[diem_gay]);
                    break;
                }
            }
        }
        foru(i, 1, n) cout << a[i] << ' ';
        cout << endl;
    }
}