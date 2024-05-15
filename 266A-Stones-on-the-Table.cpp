#include <iostream>
#include <vector>

using namespace std;
int main () {
	int n;cin>>n;
	cin.ignore();
	std::vector<char> v(n);
	for (int i = 0;i<n; ++i) {
		char x;cin>>x;
		v[i] = x;
	}

	int c =0;
	for (int i = 0; i < n; ++i) {
		if (v[i] == v[i + 1]) {
			c++;
		}
	}

	cout<<c<<endl;

	return 0;
}