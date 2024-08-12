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

struct SinhVien{
    string name, classes;
    int ngay, thang, nam;
    float gpa;
};

void nhap(SinhVien &A){
    getline(cin, A.name);
    cin >> A.classes;
    scanf("%d/%d/%d", &A.ngay, &A.thang, &A.nam);
    cin >> A.gpa;
}

void in(SinhVien A){
    cout << "B20DCCN001 " << A.name << ' ' << A.classes << ' ' << setfill('0') << setw(2) << right << A.ngay << '/' << setfill('0') << setw(2) << right << A.thang << '/' << setfill('0') << setw(4) << right << A.nam << ' ' << fixed << setprecision(2) << A.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}