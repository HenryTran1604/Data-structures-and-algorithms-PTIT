#include <bits/stdc++.h>
#define ll  long long
using namespace std;
int b[25], n;
void inp()
{
	cin >> n;
}
void print()
{
		for(int i = 1; i <= n/2; i++)
			cout << b[i] << " ";
		for(int i = n/2; i > 0; i--)
			cout << b[i] << " ";
		cout << endl;
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		b[i] = j;
		if(i == n/2) print();
		else Try(i+1);
	}
}
int main() {
	inp();
	Try(1);
	return 0;
}




