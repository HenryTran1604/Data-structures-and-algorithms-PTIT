#include <bits/stdc++.h>
using namespace std;
int c[10][10], xuoi[50], nguoc[50], cot[10], a[10], maxval = INT_MIN;
void inp()
{
	for(int i = 1; i <= 8; i++)
	{
		for(int j = 1; j <= 8; j++)
		{
			cin >> c[i][j];
		}
		cot[i] = 0;
	}
	memset(xuoi, 0, 16);
	memset(nguoc, 0, 16);
}
void Try(int i)
{
	for(int j = 1; j <= 8; j++)
	{
		if(!cot[j] && !xuoi[i-j+8] && !nguoc[i+j-1])
		{
			a[i] = j; 
			cot[j] = 1; xuoi[i-j+8] = 1; nguoc[i+j-1] = 1;
			if(i == 8)
			{
				int tmp = 0;
				for(int p = 1; p <= 8; p++)
					tmp += c[p][a[p]];
				maxval = max(maxval, tmp);
			}
			else Try(i+1);
			cot[j] = 0; xuoi[i-j+8] = 0; nguoc[i+j-1] = 0;
				
		}
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		maxval = INT_MIN;
		inp();
		Try(1);
		cout << maxval << endl;
		
	}
	return 0;
}


