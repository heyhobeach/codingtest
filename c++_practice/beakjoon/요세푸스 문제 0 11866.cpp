#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<stack>

#define _CRT_SECURE_NO_WARNINGS 

using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	
	int num, round;
	scanf("%d %d", &num, &round);
	vector<int> vec(num, 1);
	deque<int> answer;
	
	for (int i = 1; i <= num; i++) {
		vec[i - 1] = i;
	}

	int current = 0;
	int repeatcount = 1;
	int count = 0;
	//cout << "<";
	while (true) {
		if (count == num) {//종료
			break;
		}

		if (current >= num) {
			current = 0;
		}
		if (vec[current] == 0) {
			//cout << 0 << endl;
			current++;
			continue;
		}
		if (repeatcount == round) {
			//cout << vec[current] <<", ";
			answer.push_back(vec[current]);
			vec[current] = 0;
			repeatcount = 0;
			count++;
		}
		current++;
		repeatcount++;
	}
	//cout << ">";
	cout << "<";
	for (int i = 0; i < answer.size() - 1; i++) {
		cout << answer[i] << ", ";
	}cout << answer[answer.size() - 1];
	cout << ">";
	return 0;
}
