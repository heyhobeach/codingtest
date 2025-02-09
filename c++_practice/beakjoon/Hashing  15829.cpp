#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


unsigned long long HasingFunction(vector<char> _vector) {
	 long long r = 31;
	 long long m = 1234567891;

	//PowFunc(2, 3);

	 long long sum = 0;
	 int exp = 1;
	for (int i = 0; i < _vector.size(); i++) {
		 long long change = _vector[i] - 'a' + 1;
		 sum = (sum + exp* change) % m;
		 exp = (r * exp) % m;
	}

	cout << sum << endl;


	return sum%m;
}


int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	cout << 1234567891 << endl;

	int length = 0;
	std::vector<char> char_vec;
	cin >> length;
	for (int i = 0; i < length; i++) {
		char ch;
		cin >> ch;
		char_vec.push_back(ch);
	}

	unsigned long long a =HasingFunction(char_vec);
	return 0;
}



