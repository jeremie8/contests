#include <iostream>

using namespace std;

string solve() {
    string t;
    cin >> t;
    bool has0 = false, has1 = false;
    for(char c : t){
        if(c == '1') has1 = true;
        else if(c == '0') has0 = true;
        if(has0 && has1) break;
    }

    if(!has0 || !has1) return t;

    string s = "";
    char prev = t[0];
    s+= prev;
    for(int i = 1; i < t.length(); i++){
        char c = t[i];
        if(prev == c){
            if(prev == '0') s+= '1';
            else s += '0';
        }
        s+=c;
        prev = c;
    }
    return s;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cout << solve() <<endl;
    }
}
