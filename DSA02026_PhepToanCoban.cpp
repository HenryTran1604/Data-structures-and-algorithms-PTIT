#include <bits/stdc++.h>
#define fi first
#define sec second
#define pii pair<int, int>
#define toint(a) a-'0'
using namespace std;
using ll = long long;
int n = 0, ok, a[12];
string equ, res;
void check()
{
	int id = 0;
	string tmp = equ;
	for(int i = 0; i < 12; i++)
	{
		if(tmp[i] == '?')
		{
			tmp[i] = char(a[id] + '0');
			id++;
		}
	}
	int num1 = (tmp[0]-'0')*10 + tmp[1]-'0';
	int num2 = (tmp[5]-'0')*10 + tmp[6]-'0';
	int ans = (tmp[10]-'0')*10 + tmp[11]-'0';
	if(num1 < 10 || num2 < 10 || ans < 10) return;
	int T = (tmp[3] == '+')? num1+num2 : num1-num2;
	if(T == ans){
		ok = 1;
		res = tmp;
	}
}
void Try(int i) // try tu 0
{
	if(ok) return;
	for(int j = 0; j <= 9; j++)
	{
		a[i] = j;
		if(i == n-1) check();
		else Try(i+1);
	}
}

int main()
{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	cin.ignore();
	while(test--)
	{
		getline(cin, equ); // equation
		if(equ[3] == '/' || equ[3] == '*')
			cout << "WRONG PROBLEM!\n";
		else{
			n = 0; ok = 0;
			for(int i = 0; i < 12; i++)
				if(i != 3 && equ[i] == '?')
					n++;
			if(n == 0)
			{
				if(equ[3] == '?'){
					
					equ[3] = '+';
					check();
					if(!ok) {
						equ[3] = '-';
						check();
					}
				}
				else{
					check();
				}
			}
			else
			{
				if(equ[3] == '?'){
					
					equ[3] = '+';
					Try(0);
					if(!ok) {
						equ[3] = '-';
						Try(0);
					}
				}
				else{
					Try(0);
				}
			}
			if(!ok) cout << "WRONG PROBLEM!\n";
			else cout << res << endl;
		}
	}
	return 0;
}
/*Code by: Tran Quang Huy*/