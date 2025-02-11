#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);


	int goal = 0, plus = 0, minus = 0;

	cin >> plus >> minus >> goal;

	int current = 0;
	int count = 0;

	current = goal - plus;
	count = current / (plus-minus);
	if (current % (plus - minus) != 0) {//나머지가 남을 경우 1을 더해주기 위함 예 4 2 7 의 경우 나누면 1이 나오지만 실제로는 2가 되어야함 
		count++;
	}
	if (current<=0) {//시작 부터 바로 끝날때를 대비
		cout << 1 << endl;
		return 0;
	}
	while (current<goal) {//테스트 케이스를 줄이고나서 반복 시작
		current += plus;
		count++;
		if (current >= goal) {
			break;
		}
	
		current -= minus;
	}
	
	cout << count << endl;
	return 0;
}



