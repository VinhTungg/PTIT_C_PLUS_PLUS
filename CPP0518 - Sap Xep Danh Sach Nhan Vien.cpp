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
int cnt = 0;

struct NhanVien{
    string name, sex, address, id, thue, bd, ngaysinh, thangsinh, namsinh, ma;
};

void nhap(NhanVien &A){
    ++cnt;
    cin.ignore();
    if(cnt < 10) A.ma = "0000" + to_string(cnt);
    else A.ma = "000" + to_string(cnt);
    getline(cin, A.name);
    getline(cin, A.sex);
    getline(cin, A.bd);
    stringstream ss(A.bd);
    getline(ss, A.thangsinh, '/');
    getline(ss, A.ngaysinh, '/');
    getline(ss, A.namsinh, '/');
    getline(cin, A.address);
    getline(cin, A.id);
    cin >> A.thue;
}

void sapxep(NhanVien ds[], int n){
    sort(ds, ds + n, [](NhanVien &a, NhanVien &b){
        if(a.namsinh > b.namsinh) return 0;
        if(a.namsinh < b.namsinh) return 1;
        if(a.thangsinh > b.thangsinh) return 0;
        if(a.thangsinh < b.thangsinh) return 1;
        if(a.ngaysinh > b.ngaysinh) return 0;
    return 1;
    });
}

void inds(NhanVien ds[], int n){
    foru(i, 0, n - 1){
        cout << ds[i].ma << ' ' << ds[i].name << ' ' << ds[i].sex << ' ' << ds[i].bd << ' ' << ds[i].address << ' ' << ds[i].id << ' ' << ds[i].thue << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}   