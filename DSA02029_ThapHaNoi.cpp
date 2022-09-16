#include <bits/stdc++.h>
using namespace std;
void HanoiTower(int n, char a, char b, char c)
{
	if(n == 1)
	{
		cout << a << " -> " << c << endl;
		return;
	}
	HanoiTower(n-1, a, c, b);
	HanoiTower(1, a, b, c);
	HanoiTower(n-1, b, a, c);
}
int main()
{
	int n; cin >> n;
	char a = 'A', b = 'B', c= 'C';
	HanoiTower(n, a, b, c);
	return 0;
}
/*Code by: Tran Quang Huy*/
