#include <string>
#include <vector>
#include <math.h>

using namespace std;
//a*a 와 a*a*a로 표현 해도 괜찮으나 테스트 할 때 실수 한 점으로 패스
//조건 3개를 비교해야하는데 어차피 if문에서 걸리기 때문에 조건을 다 걸어주면 괜찮음 다른 조건은 실행 안 하기때문에
//double_dice 두개가 동일 할 경우 a==b||b==c||a==c를 까먹지 않아야함 a==c를 빼먹으면 535같은 경우 전부 다르다고 판단함
int solution(int a, int b, int c) {
    int answer = 0;
    int nomal = a + b + c;
    int double_dice = pow(a, 2) + pow(b, 2) + pow(c, 2);
    int triple_dice = pow(a, 3) + pow(b, 3) + pow(c, 3);
    if (a == b && b == c) {

        answer = nomal*double_dice*triple_dice;
    }
    else if (a == b || b == c||a==c) {

        answer = nomal * double_dice;
    }
    else
        answer = nomal;
    return answer;
}
