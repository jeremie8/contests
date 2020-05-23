#include <iostream>

using namespace std;


void solve() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    bool smaller = n*a-n*b <= (c+d);
    bool bigger = (n*a + n*b)>= (c-d);
    if(smaller && bigger) cout<<"Yes";
    else cout<<"No";
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
