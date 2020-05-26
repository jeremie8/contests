#include <iostream>

using namespace std;
int solve(){
    int n, m;
    cin >>n>>m;
    if(n %2 == 0){
        return (n / 2) * m;
    }else if(m % 2 == 0){
        return (m / 2) * n;
    }else{
        if(m == 1 || n == 1){
            if (m == 1 && n == 1) return 1;
            if(m == 1) return n / 2 + 1;
            else return m / 2 + 1;
        }
        return (n / 2) * m + (m / 2 + 1);
    }
}

int main() {
    int t ;
    cin >>t;
    for(int i = 0; i<t; i++) cout << to_string(solve())<<endl;
    return 0;
}
