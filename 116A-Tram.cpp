#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin>>n;
  int total = 0, max = 0;
  
  for (int i = 0; i < n; ++i) {
    int a, b; cin>>a>>b;
    
    total = total + b - a;

    if (max < total) {
      max = total;
    }
  }

  cout<<max<<endl;

  return 0;
}
