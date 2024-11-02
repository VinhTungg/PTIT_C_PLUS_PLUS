#include <bits/stdc++.h>

using namespace std;

int prime[10000001];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n+5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            if (a[i] == k) cout << i + 1;
        }
        cout << endl;
    }
}