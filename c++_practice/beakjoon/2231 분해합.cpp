#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


int AnserFunc(string str) {
	string _str = "";
	int temp = stoi(str);

	for (int i = 0; i < str.length(); i++) {
		temp += (str[i]-'0');
	}

	return temp;
}


int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;

	//number[0] = (number[0]-'0'-1) + '0';
	//
	//for (int i = 1; i < number.length(); i++) {
	//	number[i] = '9';
	//}
	//
	//
	//cout << number << endl;
	//
	//int minus=(number.length() - 1) * 9;

	string a = "0";

	for (int i = 1; i <= stoi(number); i++) {
		string str = to_string(i);
		 string answer =to_string(AnserFunc(str));
		//cout <<  answer<< endl;
		if (answer == number) {
			//cout << i << endl;
			a = to_string(i);
			break;
		}
	}

	cout << a;
}

