/*input
*/
#include <bits/stdc++.h>
#include <inttypes.h>
#define pb push_back
#define mp make_pair
#define endl '\n'
#define sp " "
#define fi first
#define se second
#define mid ((l+r)>>1)
#define MOD 1000000007
#define N 100007
#define int long long
using namespace std;
typedef pair<int, int> ii;
typedef long long ll;

int n, m, a, b, ans[N], k, j = -1;
vector<ii> v;
priority_queue<ii, vector<ii>, greater<ii> > q;

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for(int i=1; i<=n; ++i)
	{
		cin >> a >> b;
		if(a > b) swap(a, b);
		q.push(mp(a, 0));
		q.push(mp(b, 2));
	}
	for(int i=1; i<=m; ++i) cin >> a, q.push(mp(a, 1)), v.pb(mp(a, i));
		sort(v.begin(), v.end());
	while(!q.empty())
	{
		ii tmp = q.top(); q.pop();
		if(tmp.se == 0) ++k;
		if(tmp.se == 1) ans[v[++j].se] = k;
		if(tmp.se == 2) --k;
	}
	for(int i=1; i<=m; ++i) cout << ans[i] << sp;
	return 0;
}