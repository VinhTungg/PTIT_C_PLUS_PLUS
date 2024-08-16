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

struct DiemThanhPhan{
    string ma, ten, lop;
    double diem1, diem2, diem3;
};

void nhap(DiemThanhPhan ds[], int n){
    foru(i, 1, n){
        cin >> ds[i].ma;
        cin.ignore();
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].diem1 >> ds[i].diem2 >> ds[i].diem3;
    }
}

void sapxep(DiemThanhPhan ds[], int n){
    sort(ds + 1, ds + n + 1, [](DiemThanhPhan a, DiemThanhPhan b){
        return a.ten < b.ten;
    });
}

void in(DiemThanhPhan ds[], int n){
    foru(i, 1, n){
        cout << i << ' ' << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].lop << ' ' << fixed << setprecision(1) << ds[i].diem1 << ' ' << ds[i].diem2 << ' ' << ds[i].diem3 << endl;
    }
}

int main(){
    struct DiemThanhPhan ds[105];
    int n; cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
}   