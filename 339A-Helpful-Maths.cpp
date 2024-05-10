#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
	string s;
	getline(cin,s);
	s.erase('+');
	std::vector<int> v(s.length());
	for (int i = 0; i < s.length(); ++i) {
		cout<<s[i]<<endl;
		// v.push_back(stoi(s[i]));
	}

	for (int i = 0; i < v.size(); ++i) {
		if (i != v.size() - 1) {
			cout<<v[i]<<'+';
		} else {
			cout<<v[i]<<endl;
		}
	}
	return 0;
}