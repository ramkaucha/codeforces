#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	string a,b; cin>>a>>b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	int cA = 0, cB = 0;
	for (int i = 0; i < a.length(); i++) {
		cA += static_cast<int>(a[i]);
	}

	for (int i = 0; i < b.length(); i++) {
		cB += static_cast<int>(b[i]);
	}

	int c;
	if (cA > cB) {
		c = 1;
	} else if (cA < cB) {
		c = -1;
	} else {
		c = 0;
	}

	cout<<c<<endl;
	return 0;
}