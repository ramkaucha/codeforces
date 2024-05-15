#include <iostream>
#include <set>

using namespace std;

static bool distinct(int n) {
  set<int> s;

  while (n > 0) {
    int d = n % 10;
    if (s.find(d) != s.end()) {
      return false;
    }
    s.insert(d);

    n /= 10;
  }

  return true;
}

int main() {
  int n; cin>>n;
  n++;

  while(!distinct(n)) {
    n++;
  }
  
  cout<<n<<endl;

  return 0;
}
