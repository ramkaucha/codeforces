#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solve(const string& s) {
    int c = 0;

    for (size_t i = 0; i < s.length(); ++i) {
	if (s[i] == '0' && s[i+1] == '1') {
	    c++;
	}
    }

    return c + 1;
}

int main() {
    int n; cin>>n;
    vector<int> v(n);
    for (int i = 0; i <n; ++i) {
	string s;
	cin>>s;

	v[i] = solve(s);
    }

    for (int i =0; i < n; ++i) {
	cout<<v[i]<<endl;
    }

    return 0;
}
