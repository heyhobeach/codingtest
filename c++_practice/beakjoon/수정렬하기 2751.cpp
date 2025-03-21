#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	vector<int> vint;

	int n;
	scanf("%d", &n);
	int temp;
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		vint.push_back(temp);
	}

	sort(vint.begin(), vint.end());

	for (auto i : vint) {
		printf("%d\n", i);
	}

	return 0;
}
