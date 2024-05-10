#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	getline(cin, s);

	int index=0;
	for(int i=0; i<s.length();++i) {
		int j;
		for (j=0;j<i;j++) {
			if (s[i] == s[j]) {
				break;
			}
		}

		if(j==i) {
			s[index++] = s[i];
		}
	}

	cout<<s<<endl;

	if (s.length() % 2 == 1) {
		cout<<"IGNORE HIM!"<<endl;
	} else {
		cout<<"CHAT WITH HER!"<<endl;
	}
	return 0;
}