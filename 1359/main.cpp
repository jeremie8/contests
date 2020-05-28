#include <iostream>

using namespace std;

float floatAbs(float n){
    if( n < 0) return n * -1;
    return n;
}

int solve() {
    int h, c, t;
    cin >> h >> c >> t;

    float diff = floatAbs(h - t);
    int nbCups = 1;

    long long int curTotal = h;
    float curAverage, curDiff;
    int curNbCups = 1;

    float prevDiff = -1;
    bool diffHigher;
    bool hot = false;
    while(true){
        if(diff == 0) return nbCups;

        if(hot) curTotal += h;
        else curTotal += c;
        curNbCups++;
        curAverage = curTotal / (float)curNbCups;
        curDiff = floatAbs(curAverage -t );

        if(curDiff <= diff){
            if(prevDiff == curDiff) return nbCups;
            prevDiff = diff;
            diff = curDiff;
            diffHigher = false;
            nbCups = curNbCups;
        }else{
            if(diffHigher) return nbCups;
            else{
                diffHigher = true;
            }
        }

        hot = !hot;

    }

    return nbCups;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) cout << to_string(solve()) << endl;
    return 0;
}
