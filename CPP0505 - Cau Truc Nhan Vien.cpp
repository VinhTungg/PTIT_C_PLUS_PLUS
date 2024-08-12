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

struct NhanVien{
    string name, sex, address, id;
    int ngaysinh, thangsinh, namsinh, ngayky, thangky, namky;
};

void nhap (NhanVien &A){
    getline(cin, A.name);
    cin >> A.sex;
    scanf("%d/%d/%d\n", &A.ngaysinh, &A.thangsinh, &A.namsinh);
    getline(cin, A.address);
    cin >> A.id;
    scanf("%d/%d/%d", &A.ngayky, &A.thangky, &A.namky);
}

void in (NhanVien A){
    cout << "00001 " << A.name << ' ' << A.sex << ' ' << setfill('0') << setw(2) << right << A.ngaysinh << '/' << setfill('0') << setw(2) << right << A.thangsinh << '/' << setfill('0') << setw(4) << right << A.namsinh << ' ';
    cout << A.address << ' ' << A.id << ' ' << setfill('0') << setw(2) << right << A.ngayky << '/' << setfill('0') << setw(2) << right << A.thangky << '/' << setfill('0') << setw(4) << right << A.namky << ' ';
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}