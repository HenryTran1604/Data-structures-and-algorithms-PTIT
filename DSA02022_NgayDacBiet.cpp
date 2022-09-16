#include <bits/stdc++.h>
using namespace std;
int b[6];
void print()
{
	if(b[1] == 0 && b[2] == 0)
		return;
	cout << b[1]*2 << b[2]*2 << '/' << 0 << 2 << '/' << 2 << b[3]*2 << b[4]*2 << b[5]*2 << endl;
}
void Try(int i)
{
	for(int j = 0; j < 2; j++)
	{
		b[i] = j;
		if(i == 5)
			print();
		else Try(i+1);
	}
}
int main()
{
	Try(1);
	return 0;
}
