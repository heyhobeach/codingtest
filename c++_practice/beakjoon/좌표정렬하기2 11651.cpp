#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<stack>
using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	vector<pair<int, int>> pos;

	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int x, y;
		cin >> x >> y;
		pos.push_back({ y,x });
	}

	
	sort(pos.begin(),pos.end());

	for (auto i : pos) {
		printf("%d %d\n", i.second, i.first);
	}

	return 0;
}
