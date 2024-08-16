#include <bits/stdc++.h>
#define ll long long
#define foru(i,a,b) for(int i = a; i <= b; ++i)
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define endl "\n"
#define sz size

using namespace std;

class GiangVien{
	public:
		string ten, bomon, tendau;
		int stt;
		friend istream& operator >> (istream&  in, GiangVien& a){
			string x;
			getline(in, x);
			a.ten = x;
			stringstream s(x);
			while(s >> x){
				a.tendau = x;
			}
			getline(in, x);
			a.bomon = "";
			stringstream ss(x);
			while(ss >> x){
				x[0] = toupper(x[0]);
				a.bomon += x[0];
			}
			return in;
		}
		friend ostream& operator << (ostream& out, GiangVien a){
			out << "GV" << setw(2) << setfill('0') << a.stt << " " << a.ten << " " << a.bomon << endl;
			return out;
		}
};

bool cmp(GiangVien a, GiangVien b){
	if(a.tendau != b.tendau) return a.tendau < b.tendau;
	return a.stt < b.stt;
}

int main(){
	boost
	int n;
	cin >> n;
	vector<GiangVien> v;
	cin.ignore();
	for(int i = 0; i < n; ++i){
		GiangVien a;
		cin >> a;
		a.stt = i + 1;
		v.pb(a);
	}
	sort(v.begin(), v.end(), cmp);
	int q;
	cin >> q;
	while(q--){
		string s; cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for(int i = 0; i < s.sz();++i) s[i] = tolower(s[i]);
		string tmp;
		bool check = true;
		for(auto &it : v){
			tmp = it.ten;
			transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
			if(tmp.find(s) != -1){
				check = false;
				cout << it;
			}
		}
		if(check) cout << "Khong tim thay\n";
	}
}
