#include <iostream>

using namespace std;

string solve() {
    int n, m, x,y;
    cin>>n>>m>>x>>y;

    bool useY = y < x * 2;

    int total = 0;
    for(int i = 0; i<n;i++){
        string s;
        cin>>s;

        for(int j = 0; j<m; j++){
            if(s[j] == '.'){
                if(j +1 < m && s[j + 1] == '.'){
                    if(useY) total +=y;
                    else total += (2 * x);
                    ++j;
                }else{
                    total += x;
                }
            }
        }
    }
    return to_string(total);
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) cout << solve()<<endl;
    return 0;
}
