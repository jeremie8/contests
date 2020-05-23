#include <iostream>

using namespace std;

int a, b, q;

bool valid(long long x) {
    return (x % a) % b != (x % b) % a;
}

long long nbFromRtoL(long long l, long long r){
    long long nb = 0;
    for(long long i = l; i <= r; i++) if(valid(i)) nb++;
    return nb;
}

string solve() {
    a = b = q = 0;
    cin >> a >> b >> q;
    long long ab = a * b;
    string s = "";
    for (int qi = 0; qi < q; qi++) {
        long long l, r;
        cin >> l >> r;

        long long diff = r - l;

        l = l % ab;
        r = l + diff;
        long long lastCenter = r - (r % ab);

        long long nb = 0;
        long long startCenter = 1;

        long long r1 = min(ab, r);
        if(l != 1 || r1 == r){
            //1st
            nb += nbFromRtoL(l, r1);
            startCenter = r1 + 1;
        }

        if(startCenter + ab <= r){
            //center
            long long nbCenter = nbFromRtoL(1, ab);
            long long times = (lastCenter - startCenter) / ab;
            nb += nbCenter * times;
        }

        if(lastCenter + 1<=r && r1 == ab){
            //last
            nb += nbFromRtoL(lastCenter + 1, r);
        }

        s += to_string(nb) + " ";

    }
    return s;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cout << solve() << endl;
    }
}
