#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int removeDup (string str, int n) {
	sort(str.begin(), str.end());
	int c = n;
	for (int i = 0; i < n; ++i) {
		if (str[i] == str[i + 1]) {
			c--;
		}
	}

	return c;
}
int main() {
	string s;
	getline(cin, s);
	int n = s.length();
	int nL = removeDup(s, n);
	if (nL % 2 == 1) {
		cout<<"IGNORE HIM!"<<endl;
	} else {
		cout<<"CHAT WITH HER!"<<endl;
	}
	return 0;
}