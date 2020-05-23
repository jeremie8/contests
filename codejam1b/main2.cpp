#include <iostream>
#include <cmath>

using namespace std;
string reverseStr(const string& s){
    string st = "";
    for(int i = s.length() - 1; i>=0;i--){
        char c = s[i];
        if(c == 'S') c = 'N';
        else if(c == 'N') c = 'S';
        else if(c == 'E') c = 'W';
        else if(c == 'W') c = 'E';
        st+=c;
    }
    return st;
}
string branch(int curX, int curY, int curMove, string res = ""){
    if(0 == curX && 0 == curY) return res;
    if(curMove == -1)
        return "IMPOSSIBLE";

    int modif = pow(2, curMove);
    if(0 != curX){
        if(curX>0){
            //-
            string resu = branch(curX - modif, curY, curMove -1, res + "W");
            if(resu != "IMPOSSIBLE") return resu;
        }
        else{
            //+
            string resu = branch(curX + modif, curY, curMove -1, res + "E");
            if(resu != "IMPOSSIBLE") return resu;
        }
    }

    if(0 != curY){
        if(curY > 0){
            string resu = branch(curX, curY - modif, curMove -1, res + "S");
            if(resu != "IMPOSSIBLE") return resu;
        }else{
            string resu = branch(curX , curY+ modif, curMove -1, res + "N");
            if(resu != "IMPOSSIBLE") return resu;
        }
    }

    return "IMPOSSIBLE";

}

int main2() {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        long x, y;
        cin >>x>>y;
        long distance = abs(x)+abs(y);

        if(distance %2 != 1){
            cout << "Case #" << to_string(test + 1) << ": " << "IMPOSSIBLE" << endl;
            continue;
        }

        int nbMoves = 1;
        int total = 1;
        while(total<distance){
            total = total<<1;
            ++total;
            ++nbMoves;
        }

        string result = branch(x, y, nbMoves - 1);
        result = reverseStr(result);

        cout << "Case #" << to_string(test + 1) << ": " << result << endl;
    }
    return 0;
}
