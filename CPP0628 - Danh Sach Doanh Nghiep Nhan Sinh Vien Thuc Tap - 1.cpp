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

void nhap(DoanhNghiep &A){
    cin.ignore();
    getline(cin, A.ma);
    getline(cin, A.ten);
    cin >> A.soLuong;
}

void in(DoanhNghiep A){
    cout << A.ma << ' ' << A.ten << ' ' << A.soLuong << endl;
}

int main(){
    boost;
    DoanhNghiep ds[105];
    int n; cin >> n;
    foru(i, 0, n - 1){
        nhap(ds[i]);
    }
    sort(ds, ds + n, [](DoanhNghiep a, DoanhNghiep b){
        if(a.soLuong != b.soLuong) return a.soLuong > b.soLuong;
        return a.ma < b.ma;
    });
    foru(i, 0, n - 1) in(ds[i]);
}