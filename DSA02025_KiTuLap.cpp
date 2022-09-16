#include <bits/stdc++.h>
using namespace std;
int n, a[11][11], mark[11], id[11], minDiff = 500, minc = 100; 
string s[11];
void inp()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}
	for(int i = 1; i <= n; i++){
		a[i][i] = 0;
		for(int j = i+1; j <= n; j++){
			string a1 = s[i], a2 = s[j];
			int l1 = 0, l2 = 0, cnt = 0;
			while(l1 < a1.size() && l2 < a2.size()){
				if(a1[l1] < a2[l2]){
					l1++;
				}
				else if(a1[l1] > a2[l2]){
					l2++;
				}
				else{
					cnt++; l1++; l2++;
				}
			}
			a[i][j] = a[j][i] = cnt;
			minc = min(cnt, minc);
//			cout << a[i][j] << " ";
		}
	}
}
void Try(int i, int diff){
	for(int j = 1; j <= n; j++){
		if(!mark[j]){
			mark[j] = 1;
			id[i] = j;
			diff += a[id[i-1]][j];
			
			if(i == n){
				minDiff = min(minDiff, diff);
			}
			else if(diff + (n-i+1)*minc < minDiff){
				Try(i+1, diff);
			}
			diff -= a[id[i-1]][j];
			mark[j] = 0;
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	inp();
	Try(1, 0);
	cout << minDiff;
	return 0;
}
/*Code by: Tran Quang Huy*/