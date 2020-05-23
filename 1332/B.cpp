
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <math.h>

using namespace std;

void outVector(vector<int>& vec){
    std::ostringstream oss;

    if (!vec.empty())
    {
        // Convert all but the last element to avoid a trailing ","
        std::copy(vec.begin(), vec.end()-1,
            std::ostream_iterator<int>(oss, " "));

        // Now add the last element with no delimiter
        oss << vec.back();
    }

    std::cout << oss.str() << std::endl;
}

int smallestDivider(int a){
    for(int i = 2; i < sqrt(a); i++){
        if(a % i == 0) return i;
    }
    return a;
}

int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int nbVals;
        cin>>nbVals;
        map<int, int> dividers;
        vector<int> res;

        for(int j = 0; j<nbVals; j++){
            int cur;
            cin >> cur;

            int divider = smallestDivider(cur);

            auto search = dividers.find(divider);
            if (search == dividers.end()) {
                dividers.insert(make_pair(divider, dividers.size() + 1));
            }

            res.push_back(dividers[divider]);
        }
        

        cout<<dividers.size()<<endl;
        outVector(res);
    }
    
    return 0;
}
