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

struct Nguoi{
    string ten;
    int ngay, thang, nam;
};

void nhap(Nguoi ds[], int n){
    foru(i, 1, n){
        cin >> ds[i].ten;
        scanf("%d/%d/%d", &ds[i].ngay, &ds[i].thang, &ds[i].nam);
    }
}

void sapxep(Nguoi ds[], int n){
    sort(ds + 1, ds + n + 1, [](Nguoi a, Nguoi b){
        if(a.nam != b.nam) return a.nam < b.nam;
        else return a.thang != b.thang ? a.thang < b.thang : a.ngay < b.ngay;
    });
}

void in(Nguoi ds[], int n){
    cout << ds[n].ten << endl << ds[1].ten;
}

int main(){
    struct Nguoi ds[105];
    int n; cin >> n;
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
}   