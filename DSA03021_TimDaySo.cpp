#include <iostream>
using namespace std;

int main(){
    int n, minVal = 1e9; cin >> n;
    int a[n], b[n], tmp[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	minVal = min(minVal, a[i]);
	}
	int i = 1, ok = 0;
	while(i <= (minVal))
	{
		if(i > minVal/2) i = minVal;
		ok = 0;
		for(int j = 0; j < n; j++)
		{
			tmp[j] = a[j]/i;
			while(tmp[j] != 0 && a[j]/tmp[j] == i)
				tmp[j]--;
			tmp[j]++;
			if(tmp[j]*i > a[j]||a[j]/tmp[j] > i)
			{
				ok = 1;
				break;
			}
		}
		if(ok == 0){
			for(int k = 0; k < n; k++)
				b[k] = tmp[k];
		}
		i++;
	}
	int sum = 0;
	for(int j = 0; j < n; j++)
		sum += b[j];
	cout << sum;
    
}
/*Code by: Tran Quang Huy*/