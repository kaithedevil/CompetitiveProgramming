#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define nl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T;
	cin >> T;
	while (T--)
	{
		int n, a, b, c;
		cin >> n >> a >> b >> c;
		int A = min(a, b);
		int B = b - min(a, b);
		int C = min(B, c);
		if (A + C >= n)
			cout << "YES" << nl;
		if(A+C<n) cout<<"NO"<<nl;
	}
	return 0;
}