#include <string>
#include <vector>

using namespace std;
//string my_string = "banana", target = "ana";
int solution(string my_string, string target) {
    int answer = 0;
    if(my_string.find(target)!=string::npos){//find가 못 찾을 경우 string::npos 반환 만약에 찾을경우 my_string에서 찾은 위치의 가장 앞 부분 반환 여기서는 1 반환 my_string의 1의 위치부터 ana가 존재함
        answer=1;
    }else{
        answer=0;
    }
    return answer;
}
