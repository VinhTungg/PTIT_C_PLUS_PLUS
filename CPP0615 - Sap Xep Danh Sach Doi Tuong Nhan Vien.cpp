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
int idx = 0;

class NhanVien{
    public:
        string name, sex, address, id, bd, date, ngaysinh, thangsinh, namsinh, ma;
        friend istream& operator >> (istream& in, NhanVien &A){
            in.ignore();
            ++idx;
            if(idx < 10) A.ma = "0000" + to_string(idx);
            else A.ma = "000" + to_string(idx);
            getline(in, A.name);
            getline(in, A.sex);
            getline(cin, A.bd);
            stringstream ss(A.bd);
            getline(ss, A.thangsinh, '/');
            getline(ss, A.ngaysinh, '/');
            getline(ss, A.namsinh, '/');
            getline(in, A.address);
            in >> A.id;
            in >> A.date;
            return in;
        }
        friend ostream& operator << (ostream& out, NhanVien A){
            out << A.ma << ' ' << A.name << ' ' << A.sex << ' ' << A.bd << ' ' << A.address << ' ' << A.id << ' ' << A.date << endl;
            return out;
        }
};

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

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}