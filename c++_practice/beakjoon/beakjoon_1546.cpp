#include "pch.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	vector<float>vt;

	int roof = 0;
	int num = 0;
	int max = 0;
	float answer = 0;

	cin >> roof;
	for (int i = 0; i < roof; i++) {
		cin >> num;
		if (num > max) {
			max = num;
		}
		vt.push_back(num);
	}

	for (int i = 0; i < vt.size(); i++) {
		answer += vt[i] / max * 100;
	}

	answer /= roof;

	cout << answer;
}