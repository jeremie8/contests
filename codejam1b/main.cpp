#include <iostream>

using namespace std;

string getAnswer(int x, int y){
    cout << to_string(x) << " " << to_string(y) << endl<<flush;
    string answer ;
    cin >> answer;
    return answer;
}

int main() {
    int t, a, b;
    cin >> t >> a >> b;
    int rayon = a;
    int max = 1000000000;
    int diff = max - rayon;
    for (int test = 0; test < t; test++) {
        int c = 0;
        string answer = "MISS";

        int rightEdgeY = 0, rightEdgeX = 0;
        int xi = max, yi = 0;

        bool left = true;
        while (diff > 1) {
            //find right edge
            if (left) {
                xi -= diff;
                yi -= diff;
            } else {
                xi += diff;
                yi += diff;
            }
            diff /= 2;
            answer = getAnswer(xi, yi);

            left = answer == "MISS";
            c++;
            if(c == 300) return 0;
            if(answer == "WRONG") return 0;
        }
        if (answer == "MISS") xi--;

        answer = getAnswer(xi, yi-1);

        c++;
        if(c == 300) return 0;
        if(answer == "WRONG") return 0;

        bool goUp = answer == "MISS";
        while (rightEdgeY == 0) {
            xi++;
            if (goUp) {
                yi++;
            } else {
                yi--;
            }

            answer = getAnswer(xi, yi);
            c++;
            if(c == 300) return 0;
            if(answer == "WRONG") return 0;

            if (answer == "MISS") {
                rightEdgeY = yi;
                rightEdgeX - xi - 1;
            }
            c++;
        }

        answer = getAnswer(rightEdgeX - rayon, rightEdgeY);
        c++;
        if(c == 300) return 0;
        if(answer == "WRONG") return 0;

        for (int i = -1; i <= 1 && answer != "CENTER"; i++) {
            for (int j = -1; j <= 1 && answer != "CENTER"; j++) {
                answer = getAnswer(rightEdgeX - rayon + i, rightEdgeY + j);
                c++;
                if(c == 300) return 0;
                if(answer == "WRONG") return 0;
            }
        }
    }
    return 0;
}
