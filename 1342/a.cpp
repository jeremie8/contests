#include <iostream>

using namespace std;

long long solve() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    if(a*2<=b) return a*x + a*y;
    else{
        long long m = min(x, y);
        long long ma = max(x, y);
        x = m;
        y = ma;

        return b*x + a* (y-x);
    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cout << solve() <<endl;
    }
}
