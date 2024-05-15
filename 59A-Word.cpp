#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int u = 0;
    for (int i =0; i < s.length(); ++i) {
        if (isupper(s[i])) {
            u++;
        }
    }

    int l = s.length() - u;

    for (int i = 0; i < s.length(); ++i) {
        if (u > l) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }

    cout<<s<<endl;

    return 0;
}