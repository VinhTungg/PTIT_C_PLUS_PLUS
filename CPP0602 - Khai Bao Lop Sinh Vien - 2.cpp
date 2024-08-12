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
        friend istream& operator >> (istream& , SinhVien&);
        friend ostream& operator << (ostream&, SinhVien);
        string name, classes;
        int ngay, thang, nam;
        float gpa;
};

istream& operator >> (istream& in, SinhVien& A){
    getline(in, A.name);
    in >> A.classes;
    scanf("%d/%d/%d", &A.ngay, &A.thang, &A.nam);
    in >> A.gpa;
    return in;
}

ostream& operator << (ostream& out, SinhVien A){
    out << "B20DCCN001 " << A.name << ' ' << A.classes << ' ' << setfill('0') << setw(2) << right << A.ngay << '/' << setfill('0') << setw(2) << right << A.thang << '/' << setfill('0') << setw(4) << right << A.nam << ' ' << fixed << setprecision(2) << A.gpa;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}