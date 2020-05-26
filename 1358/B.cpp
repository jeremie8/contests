#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int solve(){
    int n;
    cin >>n;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        int t;
        cin >>t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int cur = 1, wait=0;
    while(!a.empty()){
        if(cur + wait >= a.back()){
            cur += wait + 1;
            wait = 0;
        }else {
            wait++;
        }

        a.pop_back();
    }
    return cur;
}

int main() {
    int t ;
    cin >>t;
    for(int i = 0; i<t; i++) cout << to_string(solve())<<endl;
    return 0;
}
