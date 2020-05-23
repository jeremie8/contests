#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        long d;
        int n;
        cin >> n >> d;
        long *arr = new long[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long minDay;
        int curX = n - 1;
        for (minDay = d; minDay >= 0; minDay--) {
            while (curX >= 0 && minDay % arr[curX] == 0)curX--;
            if (curX < 0) break;
        }
        cout << "Case #" << to_string(test + 1) << ": " << to_string(minDay) << endl;
    }
    return 0;
}
