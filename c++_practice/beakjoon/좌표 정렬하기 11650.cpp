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
	
	vector<pair<int, int>> _map;
	int n;
	int x,y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x,&y);
		_map.push_back({ x, y });
	}

	sort(_map.begin(), _map.end());
	for (int i = 0; i < _map.size(); i++) {
		printf("%d %d\n", _map[i].first, _map[i].second);
		//cout << _map[i].first << _map[i].second << endl;
	}
	return 0;
}
