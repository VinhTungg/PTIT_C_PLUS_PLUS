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

int n, m;

// Hàm tính rank của ma trận sau khi đã thực hiện khử Gauss
int check(vector<vector<double>>& a) {
    int rank = a.size();
    for(int i = 0; i < a.size(); ++i) {
        bool allZero = true;
        for(int j = 0; j < a[i].size(); ++j) {
            if(fabs(a[i][j]) > 1e-9) { // So sánh với giá trị rất nhỏ để kiểm tra phần tử có gần bằng 0 không
                allZero = false;
                break;
            }
        }
        if(allZero) --rank;
    }
    return rank;
}

int main() {
    boost;
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<vector<double>> a(n, vector<double>(m));
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) cin >> a[i][j];
        }
        if(n > 1 && m > 1) {
            for(int col = 0; col < min(n, m); ++col) {
                // Nếu phần tử chính là 0, hoán đổi với dòng khác
                if(fabs(a[col][col]) < 1e-9) {
                    bool swapped = false;
                    for(int row = col + 1; row < n; ++row) {
                        if(fabs(a[row][col]) > 1e-9) {
                            swap(a[col], a[row]);
                            swapped = true;
                            break;
                        }
                    }
                    // Nếu không tìm thấy hàng nào có phần tử khác 0, bỏ qua cột này
                    if(!swapped) continue;
                }
                for(int row = col + 1; row < n; ++row) {
                    if(fabs(a[row][col]) > 1e-9) {
                        double del = a[row][col] / a[col][col];
                        for(int colmini = col; colmini < m; ++colmini) {
                            a[row][colmini] -= del * a[col][colmini];
                        }
                    }
                }
            }
        }
        cout << check(a) << endl;
    }
}
