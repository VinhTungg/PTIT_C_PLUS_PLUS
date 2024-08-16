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

class SinhVien{
    public:
        string masv, ten, lop, email;
        friend istream& operator >> (istream& in, SinhVien &A){
            in >> A.masv;
            in.ignore();
            getline(in, A.ten);
            in >> A.lop;
            in >> A.email;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien A){
            out << A.masv << ' ' << A.ten << ' ' << A.lop << ' ' << A.email << endl;
            return out;
        }
};

void sapxep(SinhVien ds[], int N){
    sort(ds, ds + N, [](SinhVien a, SinhVien b){
        return a.lop < b.lop;
    });
}

int main(){
    SinhVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}