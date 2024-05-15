#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;

    long long j = a / c + (a % c != 0);
    long long k = b / c + (b % c != 0);

    long long ans = j * k;
    cout<<ans<<endl;

    return 0;
}
