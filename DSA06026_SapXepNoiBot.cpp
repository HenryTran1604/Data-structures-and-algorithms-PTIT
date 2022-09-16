#include <bits/stdc++.h>
using namespace std;
void in(int a[], int n)
{
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
	}
	
	// bubble sort();
	bool haveSwap;
	for(int i = 0; i < n-1; i++)
	{
		haveSwap = false;
		for(int j = 0; j < n-i-1; j++)
		{
			if(a[j] > a[j+1])
			{
				swap(a[j], a[j+1]);
				haveSwap = true;
			}
		}
		if(haveSwap == false)
			break;
		cout << "Buoc " << i+1 << ": ";
		
		in(a, n);
	}
    return 0;
}
