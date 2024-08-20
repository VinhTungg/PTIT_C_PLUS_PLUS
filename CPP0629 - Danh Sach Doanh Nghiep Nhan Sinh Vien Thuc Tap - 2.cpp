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

struct DoanhNghiep{
    string ma, ten;
    int soLuong;
};

void in(DoanhNghiep A){
    cout << A.ma << ' ' << A.ten << ' ' << A.soLuong << endl;
}

int main(){
    boost;
    int n; cin >> n;
    DoanhNghiep ds[n + 1];
    foru(i, 0, n - 1){
        cin.ignore();
        getline(cin, ds[i].ma);
        getline(cin, ds[i].ten);
        cin >> ds[i].soLuong;
    }
    sort(ds, ds + n, [](DoanhNghiep a, DoanhNghiep b){
        if(a.soLuong != b.soLuong) return a.soLuong > b.soLuong;
        return a.ma < b.ma;
    });
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " DEN " << r << " SINH VIEN:\n";
        foru(i, 0, n - 1){
            if(ds[i].soLuong >= l && ds[i].soLuong <= r) in(ds[i]);
        }
    }
}