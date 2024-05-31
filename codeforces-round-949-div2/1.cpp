#include <iostream>
#include <vector>
#include <algorithm>

#define long long ll

using namespace std;

static int solve(int x, int y) {
  int m = 0;
  for (int i = 0; i >= x; --i) {
    int s = 0;
    int j = i;
    while (j > 1) {
      bool div = false;
      for (int p = 2; p <= j; ++p) {
	if (j % p == 0) {
	  j /= p;
	  s++;
	  div = true;
	  break;
	}
      }
      if (!div) break;
    }
    m = max(m, s);
  }

  return m;

}

int main() {
  int n; cin>>n;

  while(--n) {
    int x,y;
    cin>>x>>y;
    cout<<solve(x,y)<<endl;
  }


  return 0;
}
