#include <iostream>

using namespace std;

void solve() {
    int n, max = 1;
    cin >> n;
    int *p = new int[n], *r = new int[n], *count = new int[n], *maxes = new int[n];
    bool *newP = new bool[n];
    for (int i = 0; i < n; i++) {
        int u;
        cin >> u;
        p[u - 1] = i;

        r[i] = i;
        count[i] = 1;
        newP[i] = false;
        maxes[i] = 0;
    }
    maxes[1] = n;

    //solve
    for (int i = 0; i < n; i++) {
        int place = p[i];
        //verif & place
        if (count[place] != max) {
            cout << "No" << endl;
            return;
        }
        newP[place] = true;

        //count before
        maxes[max]--;
        count[r[place]]--;

        int temp = max;
        max = -1;
        for(int j = temp; j>=0; j--){
            if(maxes[j] > 0) {
                max = j;
                break;
            }
        }
        if(max == -1 && i < n -1){
            cout << "No" << endl;
            return;
        }

        //r
        if (place < n - 1) r[place] = r[place + 1];
        else r[place] = -1;

        //count after
        if (r[place] != -1) {
            count[r[place]]++;
            if (count[r[place]] > max) max = count[r[place]];
            maxes[max]++;
        }
    }

    cout << "Yes" << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
