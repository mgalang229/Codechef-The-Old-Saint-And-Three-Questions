#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int h1 = 0;
		int h2 = 0;
		// count the number of 1s and 0s in the hero's answers
		for (int i = 0; i < 3; i++) {
			int a;
			cin >> a;
			h1 += (a == 1);
			h2 += (a == 0);
		}
		int s1 = 0;
		int s2 = 0;
		// count the number of 1s and 0s in the saint's answers
		for (int i = 0; i < 3; i++) {
			int b;
			cin >> b;
			s1 += (b == 1);
			s2 += (b == 0);
		}
		// check if the hero's and saint's 1s or 0s match with each other
		cout << (h1 == s1 || h2 == s2 ? "Pass" : "Fail") << '\n';
	}
	return 0;
}
