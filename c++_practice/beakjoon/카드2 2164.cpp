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
	deque<int> array;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		array.push_front(i);
	}

	for (auto i : array) {
		//cout << i << ",";
	}
	//cout << endl;
	while (array.size()>1) {
		array.pop_back();

		int temp = array.back();
		//cout << temp << endl;
		array.push_front(temp);
		array.pop_back();
		if (array.size() == 1)break;
	}

	cout << array[0] << endl;

	return 0;
}
