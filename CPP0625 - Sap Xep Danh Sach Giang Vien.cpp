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
  string sub,ten;
  string name;
  int stt;
};

void chuan_hoa(string &s){
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.sz();++i){
		s[i] = tolower(s[i]);
	}
}

bool cmp(Giaovien &a, Giaovien &b){
	if(a.ten != b.ten) return a.ten < b.ten;
	else{
		return a.stt < b.stt;
	}
}

int main(){
	boost
	int n;
	cin >> n;
	cin.ignore();
	vector<Giaovien> gv(n);
	for(int i = 0; i < n; ++i){
	    gv[i].stt = i + 1;
	    string mon;
	    getline(cin , gv[i].name);
	    getline(cin , mon);
	    stringstream ss(gv[i].name);
	    vector<string> v;
	    string res = "";
	    while(ss >> gv[i].name){
	    	chuan_hoa(gv[i].name);
	    	res += gv[i].name;
	    	res += " ";
	    	gv[i].ten = gv[i].name;
	    }
	    gv[i].name = res;
	    gv[i].sub = "";
	    stringstream sss(mon);
	    while(sss >> mon){
	    	mon[0] = toupper(mon[0]);
	    	gv[i].sub += mon[0];
	    }
	}
	sort(gv.begin(),gv.end(),cmp);  	
	for(auto &it : gv){
		cout << "GV" << setfill('0') << setw(2) << it.stt << " " << it.name << it.sub << endl;
	}
 }