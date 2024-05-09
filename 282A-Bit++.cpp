#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;cin>>n;
	int c = 0;
	for (int i = 0; i < n; i++) {
		string s; cin>>s;
		if (s.find("++") != string::npos) {
			c++;
		} else if (s.find("--") != string::npos) {
			c--;
		}
	}
	cout<<c<<endl;
	return 0;
}