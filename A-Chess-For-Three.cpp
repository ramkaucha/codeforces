#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin>>n;
  int c;
  vector<int> v(n);
  for (int i=0; i < n; ++i) {
    int a,b,c; cin>>a>>b>>c;

    int sum = a + b + c;
    if (sum % 2 == 1) {
      c = -1;
    } else if (sum == 0) {
      c = 0;
    } else {
      c = a + b;

      if (c % 2 == 1) {
	c = c - 1;
      }
    }
    
    v[i] = c;
  }

  for (int i = 0; i < v.size(); i++) {
    cout<<v[i]<<endl;
  }

  return 0;
}
