#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	map<string,bool> total_vec[51];

	//map<string,bool> v_string;

	int n;
	cin >> n;

	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		total_vec[str.length()].insert({ str,true });
		//v_string.push_back(str);
	}


	//for (auto i : total_vec) {
	//	if (i.size() > 1) {
	//		sort(i.begin(), i.end());
	//	}
	//}
	//sort(v_string.begin(), v_string.end());

	for (auto vec : total_vec) {
		for (auto str : vec) {
			cout << str.first << endl;
		}
	}
	return 0;
}
