#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define pob pop_back
#define f(n) for (int i = 0; i < n; i++)
#define in(n, a)                \
	for (int i = 0; i < n; i++) \
		cin >> a[i];
#define vec vector<ll> v
#define i(a, b, c, d, e)  \
	double a, b, c, d, e; \
	cin >> a >> b >> c >> d >> e;
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
		i(x1, x2, x3, v1, v2)
		double t1,t2;
		t1=abs(x1-x3)/v1;
		t2=abs(x2-x3)/v2;
		if(t1<t2) cout<<"Chef"<<nl;
		else if(t1>t2) cout<<"Kefa"<<nl;
		else cout<<"Draw"<<nl;
	}
	return 0;
}