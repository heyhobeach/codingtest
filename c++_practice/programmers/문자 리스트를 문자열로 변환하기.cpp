#include <string>
#include <vector>

using namespace std;

string solution(vector<string> arr) {
    string answer = "";
    for(int i=0;i<arr.size();i++){
        answer.push_back(arr[i][0]);//string 벡터에서 꺼내면 string 형태이기때문에 char로 변환 해 줘야지 넣을 수 있음 현재 입력으로 들어오는 arr배열은 전부 1글자이기때문에 벡터에서 꺼내온 문자열은 0으로 첫 글자만 따옴
    }
    return answer;
}
