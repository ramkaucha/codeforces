#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct parent {
	int bal;
	int pos;
	char character;
}

int main() {
	string s;
	cin>>s;

	vector<parent> data(s.length());
	int curr = 0;

	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == '(') {
			++curr;
		} else {
			--curr;
		}
		data[i] = {curr, i, s[i]};
	}


	sort(data.begin(), data.end(), [](const parent &a, const parent &b) {
		if (a.bal == b.bal) {
			return a.pos > b.pos;
		}

		return a.bal < b.bal;
	});


	for (int i = 0; i < data.size(); ++i) {
		cout<<data[i]<<endl;
	}
	
	cout<<endl;

	return 0;
	
}
