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

	string str = "";
	bool check = false;

	while (true) {
		cin >> str;
		if (str == "0") {
			break;
		}
		if (str.length() == 1) {
			check = true;
		}
		else {
			for (int i = 0; i < str.length() / 2; i++) {
				//cout << str[i] << "," << str[str.length()-1-i] << endl;
				if (str[i] == str[str.length() - 1 - i]) {
					check = true;
				}
				else {
					check = false;
					break;
				}
			}
		}


		if (check) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}


	return 0;
}

