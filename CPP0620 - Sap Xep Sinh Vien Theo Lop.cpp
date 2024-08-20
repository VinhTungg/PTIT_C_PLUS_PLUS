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

class SinhVien{
    public:
        string masv, ten, lop, email;
        friend istream& operator >> (istream& in, SinhVien &A){
            scanf("\n");
            getline(in, A.masv);
            getline(in, A.ten);
            getline(in, A.lop);
            getline(in, A.email);
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien A){
            out << A.masv << ' ' << A.ten << ' ' << A.lop << ' ' << A.email << endl;
            return out;
        }
};

void sapxep(SinhVien ds[], int N){
    sort(ds, ds + N, [](SinhVien a, SinhVien b){
        if(a.lop != b.lop) return a.lop < b.lop;
        return a.masv < b.masv;
    });
}

int main(){
    int N,i;
    cin >> N;
    SinhVien ds[N];
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}