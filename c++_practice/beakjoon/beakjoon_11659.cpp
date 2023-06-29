#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;
int arr[100002] = {};
int main(void) {
	int input = 0, roof = 0,answer=0;
	int start = 0, end = 0;
	//vector<int>vt_sum;
	int sum = 0;
	cin >> input >> roof;
	int num = 0;

	for (int i = 1; i < input; i++) {
		cin >> num;
		arr[i]=arr[i-1] + num;
	}

	for (int i = 0; i < roof; i++) {
		cin >> start >> end;

		printf("%d\n",arr[end] - arr[start - 1]);

	}

	
}