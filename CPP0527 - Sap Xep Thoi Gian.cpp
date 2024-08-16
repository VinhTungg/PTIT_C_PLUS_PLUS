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

struct ThoiGian{
    int gio, phut, giay;
};

void nhap(ThoiGian ds[], int n){
    foru(i, 1, n){
        cin >> ds[i].gio >> ds[i].phut >> ds[i].giay;
    }
}

void sapxep(ThoiGian ds[], int n){
    sort(ds + 1, ds + n + 1, [](ThoiGian a, ThoiGian b){
        if(a.gio != b.gio) return a.gio < b.gio;
        return a.phut != b.phut ? a.phut < b.phut : a.giay < b.giay;
    });
}

void in(ThoiGian ds[], int n){
    foru(i, 1, n) cout << ds[i].gio << ' ' << ds[i].phut << ' ' << ds[i].giay << endl;
}

int main(){
    struct ThoiGian ds[105];
    int n; cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
}   