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

class NhanVien{
    public:
        string name, sex, address, id;
        int ngaysinh, thangsinh, namsinh, ngayky, thangky, namky, stt;
        friend istream& operator >> (istream& in, NhanVien &A){
            in.ignore();
            getline(in, A.name);
            in >> A.sex;
            scanf("%d/%d/%d\n", &A.ngaysinh, &A.thangsinh, &A.namsinh);
            getline(in, A.address);
            in >> A.id;
            scanf("%d/%d/%d", &A.ngayky, &A.thangky, &A.namky);
            A.stt = idx++;
            return in;
        }
        friend ostream& operator << (ostream& out, NhanVien A){
            out << setfill('0') << setw(5) << A.stt << ' ' << A.name << ' ' << A.sex << ' ' << setfill('0') << setw(2) << right << A.ngaysinh << '/' << setfill('0') << setw(2) << right << A.thangsinh << '/' << setfill('0') << setw(4) << right << A.namsinh << ' ';
            out << A.address << ' ' << A.id << ' ' << setfill('0') << setw(2) << right << A.ngayky << '/' << setfill('0') << setw(2) << right << A.thangky << '/' << setfill('0') << setw(4) << right << A.namky << endl;
            return out;
        }
};

void sapxep(NhanVien ds[], int N){
    sort(ds, ds + N, [](NhanVien a, NhanVien b){
        if(a.namsinh != b.namsinh) return a.namsinh < b.namsinh;
        return a.thangsinh != b.thangsinh ? a.thangsinh < b.thangsinh : a.ngaysinh < b.ngaysinh;
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