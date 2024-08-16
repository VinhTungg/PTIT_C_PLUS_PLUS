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

struct MatHang{
    int ma;
    string ten, nhom;
    double giaMua, giaBan, loiNhuan;
};

void nhap(MatHang ds[], int n){
    foru(i, 1, n){
        cin.ignore();
        getline(cin, ds[i].ten);
        getline(cin, ds[i].nhom);
        cin >> ds[i].giaMua >> ds[i].giaBan;
        ds[i].ma = i;
        ds[i].loiNhuan = ds[i].giaBan - ds[i].giaMua;
    }
}

void in(MatHang ds[], int n){
    foru(i, 1, n){
        cout << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].nhom << ' ' << fixed << setprecision(2) << ds[i].loiNhuan << endl;
    }
}

int main(){
    struct MatHang ds[105];
    int n; cin >> n;
    nhap(ds, n);
    sort(ds + 1, ds + n + 1, [](MatHang a, MatHang b){
        return a.loiNhuan > b.loiNhuan;
    });
    in(ds, n);
}