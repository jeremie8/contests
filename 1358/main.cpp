#include <iostream>

using namespace std;

long long  solve(){
    long long x1, y1, x2, y2;
    cin >> x1>>y1>>x2>>y2;
    if(x1 == x2 || y1 == y2) return 1;
    long long  diffx = x2-x1, diffy = y2-y1;

    //n         n!
    //  =    ------
    //k      k!(n-k)!

    long long  n = diffx + diffy, k = max(diffx, diffy), nmk = n - k;
    long long  up = 1;
    while(n > k) up*= n--;
    long long  down = 1;
    while(nmk >0) down *= nmk--;
    return up / down;
}

int main() {
    int t ;
    cin >>t;
    for(int i = 0; i<t; i++) cout << to_string(solve())<<endl;
    return 0;
}
