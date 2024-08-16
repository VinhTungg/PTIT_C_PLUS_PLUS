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

struct Giaovien{
    string ten, mon, viettat;
    int stt;
};

int main(){
	boost
	Giaovien ds[105];
    int n; cin >> n;
    cin.ignore();
    unordered_map<string, vector<Giaovien>> gv;
    foru(i, 1, n){
        getline(cin, ds[i].ten);
        getline(cin, ds[i].mon);
        ds[i].stt = i;
        stringstream ss(ds[i].mon);
        ds[i].viettat = "";
        while(ss >> ds[i].mon){
            ds[i].mon[0] = toupper(ds[i].mon[0]);
            ds[i].viettat += ds[i].mon[0];
        }
        gv[ds[i].viettat].push_back(ds[i]);
    }
    int truyVan; cin >> truyVan;
    cin.ignore();
    while(truyVan--){
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp = "";
        while(ss >> s){
            s[0] = toupper(s[0]);
            tmp += s[0];
        }
        cout << "DANH SACH GIANG VIEN BO MON " << tmp << ":\n";
        for(auto &it : gv[tmp]){
            cout << "GV" << setfill('0') << setw(2) << it.stt << " " << it.ten << ' ' << tmp << endl;
        }
    }
 }