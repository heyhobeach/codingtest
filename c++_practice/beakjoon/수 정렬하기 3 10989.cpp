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

	int *num_arr = new int[10001];
	for (int i = 0; i < 10001; i++) {
		num_arr[i] = 0;
	}
	int repeat = 0;
	int temp = 0;
	scanf_s("%d", &repeat);
	for (int i = 0; i < repeat; i++) {
		scanf_s("%d", &temp);
		num_arr[temp]++;
	}
	for (int i = 0; i < 10001; i++) {
		if (num_arr[i] == 0) {
			continue;
		}
		else {
			for (int j = 0; j < num_arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	//sort(num_vec.begin(), num_vec.end());
	//for (auto i : num_vec) {
	//	printf("%d\n", i);
	//}

	return 0;
}
