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
int idx = 1;
struct NhanVien{
    string name, sex, address, id;
    int ngaysinh, thangsinh, namsinh, ngayky, thangky, namky, ma;
};

void nhap (NhanVien &A){
    cin.ignore();
    A.ma = idx++;
    getline(cin, A.name);
    cin >> A.sex;
    scanf("%d/%d/%d\n", &A.ngaysinh, &A.thangsinh, &A.namsinh);
    getline(cin, A.address);
    cin >> A.id;
    scanf("%d/%d/%d", &A.ngayky, &A.thangky, &A.namky);
}

void inds(NhanVien ds[], int N){
    foru(i, 0, N - 1){
        cout << setfill('0') << setw(5) << right << ds[i].ma << ' ' << ds[i].name << ' ' << ds[i].sex << ' ' << setfill('0') << setw(2) << right << ds[i].ngaysinh << '/' << setfill('0') << setw(2) << right << ds[i].thangsinh << '/' << setfill('0') << setw(4) << right << ds[i].namsinh << ' ';
    cout << ds[i].address << ' ' << ds[i].id << ' ' << setfill('0') << setw(2) << right << ds[i].ngayky << '/' << setfill('0') << setw(2) << right << ds[i].thangky << '/' << setfill('0') << setw(4) << right << ds[i].namky << '\n';
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}