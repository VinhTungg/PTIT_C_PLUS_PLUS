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

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(k));
        vector<vector<int>> a2(n, vector<int>(k));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                cin >> a[i][j];
                a2[i][j] = a[i][j];
            }
        }
        int tren = 0, duoi = n - 1;
        int trai = 0, phai = k - 1;
        while (tren <= duoi && trai <= phai) {
            for (int i = trai + 1; i <= phai; i++) {
                a2[tren][i] = a[tren][i - 1];
            }
            for (int i = tren + 1; i <= duoi; i++) {
                a2[i][phai] = a[i - 1][phai];
            }
            if (trai <= phai) {
                for (int i = phai - 1; i >= trai; i--) {
                    a2[duoi][i] = a[duoi][i + 1];
                }
            }
            if (tren <= duoi) {
                for (int i = duoi - 1; i >= tren; i--) {
                    a2[i][trai] = a[i + 1][trai];
                }
            }
            tren++;
            duoi--;
            trai++;
            phai--;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) {
                cout << a2[i][j] << " ";
            }
        }
        cout << endl;
    }
}
