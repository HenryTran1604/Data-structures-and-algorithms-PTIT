#include <bits/stdc++.h>
#define ll  long long
using namespace std;
int n, k, a[1005];
void in()
{
	cin >> n >> k;
	for(int i = 1; i <= k; i++)
		cin >> a[i];
}
void SinhKeTiep()
{
	int i = k;
	while(i > 0 && a[i] == n-k+i)
		i--;
	if(i == 0)
		a[i] = -1;;
	a[i]++;
	for(int j = i+1; j <= k; j++)
		a[j] = a[i] + j - i;
	for(int j = 1; j <= k; j++)
		cout << a[j] << " ";
	cout << endl;
}
int main() {
	int t; cin >> t;
	while(t--)
	{
		in();
		SinhKeTiep();
	}
	return 0;
}
/*Code by: Tran Quang Huy*/
