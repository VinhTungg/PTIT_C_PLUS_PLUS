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

struct ThucTap{
    int stt;
    string ma, ten, lop, email, doanhNghiep;
};

void nhap(ThucTap ds[], int n){
    foru(i, 1, n){
        cin >> ds[i].ma;
        cin.ignore();
        getline(cin, ds[i].ten);
        cin >> ds[i].lop;
        cin >> ds[i].email;
        cin >> ds[i].doanhNghiep;
        ds[i].stt = i;
    }
}

void sapxep(ThucTap ds[], int n){
    sort(ds + 1, ds + n + 1, [](ThucTap a, ThucTap b){
        return a.ten < b.ten;
    });
}

void in(ThucTap A){
    cout << A.stt << ' ' << A.ma << ' ' << A.ten << ' ' << A.lop << ' ' << A.email << ' ' << A.doanhNghiep << endl;
}

int main(){
    struct ThucTap ds[105];
    int n; cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    int truyVan; cin >> truyVan;
    while(truyVan--){
        string timkiem; cin >> timkiem;
        foru(i, 1, n){
            if(timkiem == ds[i].doanhNghiep) in(ds[i]);
        }
    }
}   