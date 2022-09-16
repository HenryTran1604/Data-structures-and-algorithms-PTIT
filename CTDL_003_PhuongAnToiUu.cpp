#include <bits/stdc++.h>
using namespace std;
int num, maxW, w[100], v[100] = {}, B[100] = {};
int maxVal= INT_MIN, res[100];
void nhap(int *a, int n)
{
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}

void update()
{
    int sumW = 0, sumV = 0;
    for(int i = 1; i <= num; i++)
    {
        sumW += w[i]*B[i];
        sumV += v[i]*B[i];
    }
    if(sumW > maxW || sumV <= maxVal) return;
    maxVal = sumV;
    for(int i = 1; i <= num; i++)
        res[i] = B[i];
}
void Try(int i) // sinh nhi phan
{
    for(int j = 0; j < 2; j++)
    {
        B[i] = j;
        if(i == num) update();
        else Try(i+1);
    }
}
int main()
{
    cin >> num;
	cin >> maxW;
    nhap(v, num); // khoi luong
    nhap(w, num); // gia tri 
    Try(1);
    cout << maxVal << endl;
    for(int i = 1; i <= num; i++)
        cout << res[i] << " ";
}

