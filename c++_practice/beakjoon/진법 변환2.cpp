#include<iostream>
#include<algorithm>
#include<string>
#include <math.h>
using namespace std;

void ReturnCh(int value, string* pstr) {
	char ch = ' ';
	if (value > 9) {
		ch = 'A' + (value - 10);
	}
	else {
		ch = '0' + value;
	}
	*pstr += ch;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num = 0;
	int n = 0;

	cin >> num >> n;
	int count = 0;
	string result = "";
	while (true)
	{
		int value = num % n;
		char ch = ' ';
		ReturnCh(value, &result);
		if (num < n) {
			//cout << num << n << endl;
			//ReturnCh(num/n,&result);
			break;
		}
		num /= n;

	}
	string temp;
	//cout << result.length() << endl;
	for (int i = result.length()-1; i >= 0; i--) {
		temp+=result[i];
	}
	result = temp;
	cout << result << endl;
	//cout << (char)('A' + 1) << endl;
}
