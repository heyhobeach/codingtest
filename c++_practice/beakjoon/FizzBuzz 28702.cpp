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

	string fizz = "Fizz";
	string buzz = "Buzz";
	string fizzBuzz = "FizzBuzz";
	int count = 0;
	string temp = "";
	for (int i = 0; i < 3; i++) {
		cin >> temp;
		if (temp == fizz || temp == buzz || temp == fizzBuzz) {
			count++;
			continue;
		}
		else {
			int tempint = stoi(temp) + 3-count;
			if (tempint % 15 == 0) {
				cout << fizzBuzz << endl;
			}
			else if (tempint % 5 == 0) {
				cout << buzz << endl;
			}
			else if(tempint%3==0) {
				cout << fizz << endl;
			}
			else {
				cout << tempint << endl;
			}

			break;
		}
	}

	return 0;
}
