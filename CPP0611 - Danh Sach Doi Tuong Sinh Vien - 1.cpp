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
int cnt = 1;

class SinhVien{
    public:
        string name, classes;
        int ngay, thang, nam, ma;
        float gpa;
        friend istream& operator >> (istream& in, SinhVien &A){
            in.ignore();
            getline(in, A.name);
            in >> A.classes;
            scanf("%d/%d/%d", &A.ngay, &A.thang, &A.nam);
            in >> A.gpa;
            A.ma = cnt++;
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien A){
            out << "B20DCCN" << setfill('0') << setw(3) <<  A.ma << ' ' << A.name << ' ' << A.classes << ' ' << setfill('0') << setw(2) << right << A.ngay << '/' << setfill('0') << setw(2) << right << A.thang << '/' << setfill('0') << setw(4) << right << A.nam << ' ' << fixed << setprecision(2) << A.gpa << endl;
            return out;
        }
        
};

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}