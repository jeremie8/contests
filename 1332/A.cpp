//t -> t= nb tests
//a b c d -> a = left, b=right, c=down (y-1), d= up (y+1)
//x, y, x1, y1, x2, y2 -> x,y = current pos, x1,y1 = min, x2,y2= max

//output : "YES" or "NO"

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string res = "NO";
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int x, y, x1, y1, x2, y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;

        int finalX = x - a + b;
        int finalY = y - c + d;
        if(finalX <= x2 && 
        finalX >= x1 && 
        finalY <= y2 && 
        finalY >= y1) {
            if((a != 0 || b != 0) && x1 == x2) res = "NO";
            else if((c != 0 || d != 0 )&& y1 == y2) res = "NO";
            else res = "YES";
        }

        

        cout<<res<<endl;
    }
    
    return 0;
}
