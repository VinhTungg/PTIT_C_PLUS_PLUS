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

struct NhanVien{
    string name, sex, address, id;
    int ngaysinh, thangsinh, namsinh, ngayky, thangky, namky, ma;
};

void nhap (NhanVien ds[], int n){
    foru(i, 1, n){
        cin.ignore();
        getline(cin, ds[i].name);
        cin >> ds[i].sex;
        scanf("%d/%d/%d\n", &ds[i].ngaysinh, &ds[i].thangsinh, &ds[i].namsinh);
        getline(cin, ds[i].address);
        cin >> ds[i].id;
        scanf("%d/%d/%d", &ds[i].ngayky, &ds[i].thangky, &ds[i].namky);
        ds[i].ma = i;
    }
}

void sapxep(NhanVien ds[], int n){
    sort(ds + 1, ds + n + 1, [](NhanVien a, NhanVien b){
        if(a.namsinh != b.namsinh) return a.namsinh < b.namsinh;
        else return (a.thangsinh != b.thangsinh) ? a.thangsinh < b.thangsinh : a.ngaysinh < b.ngaysinh;
    });
}

void in (NhanVien ds[], int n){
    foru(i, 1, n){
        cout << setfill('0') << setw(5) << ds[i].ma << ' ' << ds[i].name << ' ' << ds[i].sex << ' ' << setfill('0') << setw(2) << right << ds[i].ngaysinh << '/' << setfill('0') << setw(2) << right << ds[i].thangsinh << '/' << setfill('0') << setw(4) << right << ds[i].namsinh << ' ';
        cout << ds[i].address << ' ' << ds[i].id << ' ' << setfill('0') << setw(2) << right << ds[i].ngayky << '/' << setfill('0') << setw(2) << right << ds[i].thangky << '/' << setfill('0') << setw(4) << right << ds[i].namky << endl;
    }
}

int main(){
    struct NhanVien ds[105];
    int n; cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
}   