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

struct SinhVien{
    string msv, lop, ten;
    double d1, d2, d3;
};

void nhap(SinhVien &a){
    cin >> a.msv;
    scanf("\n");
    getline(cin, a.ten);
    cin >> a.lop;
    cin >> a.d1 >> a.d2 >> a.d3;
}

void sap_xep(SinhVien a[], int n){
    sort(a, a + n, [](SinhVien x, SinhVien y){
        return x.msv < y.msv;
    });
}

void in_ds(SinhVien a[], int n){
    for(int i = 0; i < n; ++i) cout << i + 1 << ' ' << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << ' ' << setprecision(1) << fixed << a[i].d1 << ' ' << a[i].d2 << ' ' << a[i].d3 << endl;
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}