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

class NhanVien{
    public:
        string name, sex, address, id;
        int ngaysinh, thangsinh, namsinh, ngayky, thangky, namky;
        friend istream& operator >> (istream& in, NhanVien &A){
            getline(in, A.name);
            in >> A.sex;
            scanf("%d/%d/%d\n", &A.ngaysinh, &A.thangsinh, &A.namsinh);
            getline(in, A.address);
            in >> A.id;
            scanf("%d/%d/%d", &A.ngayky, &A.thangky, &A.namky);
            return in;
        }
        friend ostream& operator >> (ostream& out, NhanVien A){
            out << "00001 " << A.name << ' ' << A.sex << ' ' << setfill('0') << setw(2) << right << A.ngaysinh << '/' << setfill('0') << setw(2) << right << A.thangsinh << '/' << setfill('0') << setw(4) << right << A.namsinh << ' ';
            out << A.address << ' ' << A.id << ' ' << setfill('0') << setw(2) << right << A.ngayky << '/' << setfill('0') << setw(2) << right << A.thangky << '/' << setfill('0') << setw(4) << right << A.namky << ' ';
            return out;
        }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}