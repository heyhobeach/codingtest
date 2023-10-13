#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x,y;
    vector<int> x_vec;
    vector<int> y_vec;

    for (auto i : dots) {
        x_vec.push_back(i[0]);
        y_vec.push_back(i[1]);
    }
    sort(x_vec.begin(), x_vec.end());
    x_vec.erase(unique(x_vec.begin(), x_vec.end()), x_vec.end());
    x=x_vec[0]-x_vec[1];

    sort(y_vec.begin(), y_vec.end());
    y_vec.erase(unique(y_vec.begin(), y_vec.end()), y_vec.end());
    y=y_vec[0]-y_vec[1];
    
    answer=abs(x)*abs(y);

    

    return answer;
}
