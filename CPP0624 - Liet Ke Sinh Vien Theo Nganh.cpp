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
        string masv, ten, lop, email, nganh;
        friend istream& operator >> (istream& in, SinhVien &A){
            in >> A.masv;
            in.ignore();
            getline(in, A.ten);
            in >> A.lop;
            in >> A.email;
            A.nganh = A.masv.substr(3, 4);
            return in;
        }
        friend ostream& operator << (ostream& out, SinhVien A){
            out << A.masv << ' ' << A.ten << ' ' << A.lop << ' ' << A.email << endl;
            return out;
        }
};

string trave(string s){
    if(s == "Ke toan") return "DCKT";
    if(s == "Cong nghe thong tin") return "DCCN";
    if(s == "An toan thong tin") return "DCAT";
    if(s == "Vien thong") return "DCVT";
    return "DCDT";
}

int main(){
    SinhVien ds[50];
    int N,i;
    cin >> N;
    map<string, vector<SinhVien>> mp;
    for(i = 0; i < N; i++){
        cin >> ds[i];
        mp[ds[i].nganh].push_back(ds[i]);
    }
    int truyVan; cin >> truyVan;
    cin.ignore();
    while(truyVan--){
        string s; getline(cin, s);
        string tmp = trave(s);
        transform(all(s), s.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for(auto &ans : mp[tmp]) cout << ans;
    }
}