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

int binary_search(int a[], int n, int target){
    int l = 0, r = n - 1;
    int res = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(a[mid] > target){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

// Bài này tính thêm trường hợp bằng 0 nữa mới AC
int main(){
    boost;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        int dem[5] = {};
        for(auto &num : a) cin >> num;
        for(auto &num : b) {
            cin >> num;
            if(num <= 4) dem[num]++;
        }
        sort(b, b + m);
        ll cnt = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] == 0) continue;
            else if(a[i] == 1){
                cnt += dem[0];
                continue;
            }else if(a[i] == 2) cnt = cnt - dem[3] - dem[4];
            else if(a[i] == 3) cnt += dem[2];
            cnt += (dem[0] + dem[1]);
            int tmp = binary_search(b, m, a[i]);
            if(tmp != -1) cnt += m - tmp;
        }
        cout << cnt << endl;
    }
}
