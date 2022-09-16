#include <bits/stdc++.h>
#define ft first
#define sd second
#define pii pair<int, int>
#define toint(a) a-'0'
#define all(a) a.begin(), a.end()
#define endl '\n'
using namespace std;
using ll = long long;
const int MOD = 1e9+7;
int maxn = 1e4+1;
void createPoly(int a[], string s){
	string token;
	stringstream ss(s);
	while(ss >> token){
		if(token == "+") continue;
		int heso = 0, somu = 0, flag = 0;
		for(int i = 0; i < token.length(); i++){
			if(isdigit(token[i])){
				if(flag == 0) heso = 10*heso + token[i] - '0';
				else somu = 10*somu + token[i] - '0';
			}
			else flag = 1;
		}
		a[somu] += heso;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	cin.ignore();
	while(t--){
		int a[maxn] = {0}, b[maxn] = {0}, c[maxn] = {};
		string s; getline(cin, s);
		createPoly(b, s);
		getline(cin, s);
		createPoly(c, s);
		vector <pair<int, int>> v;
		for(int i = 10000; i >= 0; i--){
			if(b[i] + c[i] != 0){
				v.push_back({b[i]+c[i], i});
			}
		}
		for(int i = 0; i < v.size()-1; i++){
			cout << v[i].ft << "*x^" << v[i].sd << " + ";
		}
		cout << v.back().ft << "*x^" << v.back().sd << endl;
	}
	return 0;
}

/*Code by: Tran Quang Huy*/