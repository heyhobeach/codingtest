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

	map<int, bool> _map;
	int n;
	int temp;
	scanf("%d", &n);//cout cin하면 오답나옴 시간 초과
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		_map.insert({ temp, true });
	}

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		printf("%d\n", _map[temp]);
	}

	return 0;
}
