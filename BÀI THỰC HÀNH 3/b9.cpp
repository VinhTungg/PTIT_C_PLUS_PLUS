#include <bits/stdc++.h>

using namespace std;

int prime[10000001];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1][4];
        int dem1 = 0, dem0 = 0, dem = 0;
        for (int i = 0; i < n; i++){
            dem1 = 0, dem0 = 0;
            for (int j = 0; j < 3; j++){
                cin >> a[i][j];
                if (a[i][j] == 1) dem1++;
                else dem0++;
            }
            if (dem1 >= 2) dem++;
            }   
        cout << dem << endl;
    return 0;
}
}