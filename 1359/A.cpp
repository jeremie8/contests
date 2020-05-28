#include <iostream>

using namespace std;

string solve() {
    int n, m, k;
    cin >> n >> m >> k; //9 6 3

    int nbCardsPerPlayer = n/k; //9/3 = 3
    int maxNbJokers = min(m, nbCardsPerPlayer); //min(6, 3) = 3
    int remainingJokers = m - maxNbJokers; //6 - 3 = 3

    int maxLeft = remainingJokers / (k-1) + 1; //3 /
    if(remainingJokers % (k -1)== 0) maxLeft--;

    int result = maxNbJokers - maxLeft;
    return to_string(result);
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) cout << solve()<<endl;
    return 0;
}
