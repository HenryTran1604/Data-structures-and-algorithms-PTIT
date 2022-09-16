#include <bits/stdc++.h>
#define ll  long long
using namespace std;

int main() {
	int t; cin >> t;
	while(t--)
	{
		int n; string s; cin >> n >> s;
		if(next_permutation(s.begin(), s.end()) == 0) cout << n << " BIGGEST\n";
		else
		{
			cout << n << " " << s << endl;
		}
	}
	return 0;
}



