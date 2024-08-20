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
    string ma, ten, lop;
    float diem1, diem2, diem3;
};

void nhap(SinhVien &A){
    cin >> A.ma;
    scanf("\n");
    getline(cin, A.ten);
    cin >> A.lop;
    cin >> A.diem1 >> A.diem2 >> A.diem3;
}

void sap_xep(SinhVien ds[], int n){
    sort(ds, ds + n, [](SinhVien a, SinhVien b){
        return a.ma < b.ma;
    });
}

void in_ds(SinhVien ds[], int n){
    foru(i, 0, n - 1){
        cout << i + 1 << ' ' << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].lop << ' ' << fixed << setprecision(1) << ds[i].diem1 << ' ' << ds[i].diem2 << ' ' << ds[i].diem3 << endl;
    }
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