#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
    
    int n;cin>>n;

    while(n--){
    	int nk; 
	cin>>nk;
	string s;
	cin>>s;
	int c=0;
	for (int i = 0; i<nk;++i) {
	    if (s[i] == 'U') {
		c++;
	    }
	}
	
	if (c % 2 == 1) {
	    cout<<"YES"<<endl;
	} else {
	    cout<<"NO"<<endl;
	}
    }
    return 0;
}
