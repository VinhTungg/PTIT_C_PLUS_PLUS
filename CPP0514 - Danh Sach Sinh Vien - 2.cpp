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
    int ma, ngay, thang, nam;
    string ten, lop;
    float gpa;
};

void chuanhoa(string &s){
    s[0] = toupper(s[0]);
    foru(i, 1, s.size() - 1) s[i] = tolower(s[i]);
}

void nhap(SinhVien ds[], int N){
    foru(i, 1, N){
        cin.ignore();
        string tmp;
        getline(cin, tmp);
        stringstream ss(tmp);
        ds[i].ten = "";
        while(ss >> tmp){
            chuanhoa(tmp);
            ds[i].ten += (tmp + ' ');
        }
        ds[i].ten.pop_back();
        cin >> ds[i].lop;
        scanf("%d/%d/%d", &ds[i].ngay, &ds[i].thang, &ds[i].nam);
        cin >> ds[i].gpa;
        ds[i].ma = i;
    }
}

void in(SinhVien ds[], int N){
    foru(i, 1, N){
        cout << "B20DCCN" << setfill('0') << setw(3) << right << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].lop << ' ' << setfill('0') << setw(2) << right << ds[i].ngay << '/' << setfill('0') << setw(2) << right << ds[i].thang << '/' << setfill('0') << setw(4) << right << ds[i].nam << ' ' << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}