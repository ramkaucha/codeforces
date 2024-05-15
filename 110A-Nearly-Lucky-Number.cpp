#include <iostream>
#include <string>

using namespace std;

static bool isLucky (int x) {
    string s = to_string(x);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != '4' && s[i] != '7') {
            return false;
        }

    }
    return true;
}

int main() {
    string s;
    getline(cin, s);

    int c = 0;
    for (int i = 0; i<s.length();++i) {
        if (s[i] == '4' || s[i] == '7') {
            c++;
        }

    }

    if (isLucky(c)) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}