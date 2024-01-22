
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string diyreverse(string str) {
    string reverse_str = "";
    for (int i = str.length(); i >= 0; i--) {
        reverse_str += str[i];
    }
    return reverse_str;
}

string solution(vector<int> food) {
    string answer = "";
    string temp="";
        for (int i = 1; i < food.size(); i++) {
        if (food[i] % 2 == 1) {
            food[i] -= 1;
        }
        for (int j = 0; j < food[i]/2; j++) {
            answer+= to_string(i);
        }
    }
    temp=answer;
    reverse(answer.begin(),answer.end());
    answer=temp+"0"+answer;
    return answer;
}
