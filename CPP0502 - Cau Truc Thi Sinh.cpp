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

struct ThiSinh{
    string name, date;
    float p1, p2, p3, totalp;
};

void nhap(ThiSinh &A){
    getline(cin, A.name);
    cin >> A.date;
    cin >> A.p1 >> A.p2 >> A.p3;
    A.totalp = A.p1 + A.p2 + A.p3;
}

void in(ThiSinh A){
    cout << A.name << ' ' << A.date << ' ' << fixed << setprecision(1) << A.totalp;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}