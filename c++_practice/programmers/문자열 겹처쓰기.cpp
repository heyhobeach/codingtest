#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = my_string.replace(s,overwrite_string.length(),overwrite_string);//replace 사용법 베이스 문자열.replace(변환을 시작할 위치,변환 시킬 str의 문자열 개수,replace할 문자열)
    return answer;
}

//예 my_string.replace(s,2,overwrite_string); s 부터 2개의 문자열을 overwrite_string으로 교체 
// 여기서 my_string.replace(s,2,overwrite_string,3,4); 라면 s부터 2개의 문자열을 overwrite_string의 3부터 4개의 문자로 교체
//만약 마지막 인자가 없다면 3부터 끝까지의 문자
