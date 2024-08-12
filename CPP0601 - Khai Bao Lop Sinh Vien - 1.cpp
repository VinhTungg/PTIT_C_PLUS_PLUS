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
        void nhap();
        void xuat();
        string name, classes;
        int ngay, thang, nam;
        float gpa;
};

void SinhVien::nhap(){
    getline(cin, name);
    cin >> classes;
    scanf("%d/%d/%d", &ngay, &thang, &nam);
    cin >> gpa;
}

void SinhVien::xuat(){
    cout << "B20DCCN001 " << name << ' ' << classes << ' ' << setfill('0') << setw(2) << right << ngay << '/' << setfill('0') << setw(2) << right << thang << '/' << setfill('0') << setw(4) << right << nam << ' ' << fixed << setprecision(2) << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}