#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<stack>
#include<map>

#define _CRT_SECURE_NO_WARNINGS 

using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int sugar;
	cin >> sugar;

	vector<int> three;
	vector<int> five;


	for (int i = 0; i < (sugar / 3) + 1; i++) {
		three.push_back((i + 1) * 3);
	}

	for (int i = 0; i < (sugar / 5) + 1; i++) {
		five.push_back((i + 1) * 5);
	}

	vector<int>_min;
	//cout << five.size() << endl;
	for (int i = 0; i < five.size(); i++) {
		for (int j = 0; j < three.size(); j++) {
			if (three[j] + five[i] == sugar) {
				_min.push_back(j + 1 + i + 1);
				//printf("find : %d => three %d five %d\n", sugar, j+1, i+1);
			}

		}
	}
	bool check = false;
	if (_min.size() == 0) {
		check = true;
	}
	if (sugar % 3 == 0) {
		//printf("find : %d => three %d\n", sugar, sugar/3);
		_min.push_back(sugar / 3);
	}
	if (sugar % 5 == 0 ) {
		//printf("find : %d => five %d\n", sugar, sugar/5);
		_min.push_back(sugar / 5);
	}

	//cout << endl;
	if (_min.size() != 0) {
		int element = min_element(_min.begin(), _min.end()) - _min.begin();
		cout << _min[element] << endl;
	}
	else {
		cout << -1 << endl;
	}

	return 0;
}
