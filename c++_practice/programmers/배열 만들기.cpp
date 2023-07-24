#include <vector>// 해당 내용은 다른 답안

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;

    for (int i = l; i <= r; i++) {
        bool is_valid = true;
        int num = i;

        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && digit != 5) {
                is_valid = false;
                break;
            }
            num /= 10;
        }

        if (is_valid)
            answer.push_back(i);
    }

    if (answer.empty())
        answer.push_back(-1);

    return answer;
}

===========================================================
#include <string>// 내 답안 비효율적 굳이 전부 vector에 넣을 필요 없었고 그냥 %10해서 나머지 계산하면 뒷 자리 부터 하나씩 가져올수있음 반복 돌면서 첫 자리 까지 다 가져오는데 해당 숫자가 0이나 5가 아니면 false로 break를 걸 수 있었음 위에 답안이 그런 내용
그리고 true false를 값을 주었기때문에 굳이 if에서 ==으로 한번 더 비교 할 필요 없었음
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int>answer;
    vector<string> vt_string;
    string a = "";
    bool check = true;
    for (int i = l; i <= r; i++) {
        vt_string.push_back(to_string(i));
    }

    for (auto i : vt_string) {
        for (auto j : i) {
            if (j != '5'&&j!='0') {
                check = false;
            }
        }
        if (check != false) {
            answer.push_back(stoi(i));
        }check = true;
    }
    if(answer.size()==0){
        answer.push_back(-1);
    }
    return answer;
}
