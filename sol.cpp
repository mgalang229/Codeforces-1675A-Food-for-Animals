#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b, c, x, y;
		cin >> a >> b >> c >> x >> y;
		long long rem = 0;
		if (a < x) {
			rem += (x - a);
		}
		if (b < y) {
			rem += (y - b);
		}
		cout << (c >= rem ? "YES" : "NO") << '\n';
	}
	return 0;
}
