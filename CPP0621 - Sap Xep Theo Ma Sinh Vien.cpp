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
            getline( in , A.lop ); 
            getline( in , A.email ) ;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien A){
            out << A.masv << ' ' << A.ten << ' ' << A.lop << ' ' << A.email << endl;
            return out;
        }
        string getmsv(){
            return masv;
        }
};

void sapxep(vector<SinhVien> &ds){
    sort(all(ds), [](SinhVien &a, SinhVien &b){
        return a.getmsv() < b.getmsv();
    });
}

int main(){
    vector<SinhVien> ds;
    SinhVien A;
    while(cin >> A){
        ds.push_back(A);
    }
    sapxep(ds);
    for(auto &a : ds) cout << a;
    return 0;
}