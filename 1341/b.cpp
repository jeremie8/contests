#include <iostream>

using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    int maxNbPeaks = 0, l = 0;
    for (int i = 0; i < n; i++) cin >> arr[i];
    //first
    for (int i = 1; i < k - 1; i++) {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) maxNbPeaks++;
    }

    int curNbPeaks = maxNbPeaks;
    //next
    for(int i = k; i < n; i++){
        //if 2nd was a peak, remove from cur
        if(arr[i-k]<arr[i-k+1] && arr[i-k+2]<arr[i-k+1]) curNbPeaks--;
        //if new is a peak, add to cur
        if(arr[i-2]<arr[i-1] && arr[i]<arr[i-1]) curNbPeaks++;
        //if cur > max, replace
        if(curNbPeaks>maxNbPeaks){
            maxNbPeaks = curNbPeaks;
            l= i-k+1;
        }
    }

    cout << to_string(maxNbPeaks + 1) << " " << to_string(l + 1) << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
