#include <iostream>

using namespace std;

int main() {
	int k,n,w;cin>>k>>n>>w;
	int t = 0;
	for (int i=1; i <= w;++i) {
		t += k * i;
	}

	int r = t - n;
	if (r < 0) {
		r = 0;
	}

	cout<<r<<endl;

	return 0;
}