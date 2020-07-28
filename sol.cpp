#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s;
	cin >> s;
	int b = 0, mb = 0;
	for(int i = 0; i < (int) s.size(); ++i) {
		if(s[i] == '(') b++;
		else b--;
		mb = max(mb, b);
	}
	for(int i = 0; i < mb; ++i) {
		cout << '(';
	}
	for(int i = 0; i < mb; ++i) {
		cout << ')';
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
