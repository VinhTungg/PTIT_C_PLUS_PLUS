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
#define PI 3.141592653589793238

using namespace std;

double calcDis(double a, double b, double c, double d){
    return sqrt((a - c) * (a - c) + (b - d) * (b - d));
}

bool check(double A, double B, double C){
    if(A + B <= C) return false;
    if(A + C <= B) return false;
    if(B + C <= A) return false;
    return true;
}

double calcS(double A, double B, double C){
    double R;
    R = ((A * B * C) * (A * B * C)) / ((A + B + C) * (A + B - C) * (B + C - A)* (C + A - B));
    return R;
}

int main(){
    int t = 1; cin >> t;
    while(t--){
        double xA, yA, xB, yB, xC, yC;
        cin >> xA >> yA >> xB >> yB >> xC >> yC;
        double A = calcDis(xA, yA, xB, yB);
        double B = calcDis(xB, yB, xC, yC);
        double C = calcDis(xC, yC, xA, yA);
        if(!check(A, B, C)) cout << "INVALID\n";
        else{
            double S;
            S = PI * calcS(A, B, C);
            cout << fixed << setprecision(3) << S << endl;
        }
    }
}   