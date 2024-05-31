#include <iostream>
#include <vector>

using namespace std;

int solve(string s) {
    int c = 0;
    int t = 0;
    for (int i = 0; i < s.length(); ++i) {
	if (s[i] == s[i - 1]) {
	    continue;
	} else {
	    c++;
	}

	if (s[i] == '1' && s[i - 1] == '0') {
	    t = 1;
	}

    }

    return c - t;
}

int main() {
    int n; cin>>n;
    vector<int> v(n);

    for (int i =0; i <n; ++i) {
	string k; cin>>k;

	int j = solve(k);
	v[i] = j;
    }

    for (int i = 0; i < n; ++i) {
	cout<<v[i]<<endl;
    }

    return 0;
}

