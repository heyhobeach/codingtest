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

	int num;
	cin >> num;

	int count = 0;

	count += num / 5;
	count += num / 25;
	count += num / 125;

	cout << count <<endl;
	

	return 0;
}
