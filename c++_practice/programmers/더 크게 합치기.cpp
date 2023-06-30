#include <iostream>
#include <vector>
#include <string>
#include <sstream>

//문자열로 변환 후 int값 비교하고 더 큰 값을 앞에 두고 string으로 찹친 후 int로 변환

//int -> string으로 변환 할 수 있는 2가지 방법 c++ 11 버전 이상에서는 to_string을 사용하여 변환 가능
//말고 sstream 라이브러리에서 stringstream 변수를 선언 한 이후 stringstream 변수에 int를 넣은 이후 변수.str()로 변환
using namespace std;


int main(void) {
	string temp1 = "", temp2 = "";
	int answer = 0;

	int a = 0, b = 0;
	cin >> a >> b;
	stringstream ss1,ss2;
	ss1 << a, ss2 << b;
	temp1 = ss1.str()+ss2.str();
	temp2 = ss2.str() + ss1.str();
	//temp1 = to_string(a) + to_string(b);
	//temp2 = to_string(b) + to_string(a);
	if (stoi(temp1) > stoi(temp2)) {
		answer = stoi(temp1);
	}
	else
	{
		answer = stoi(temp2);
	}

	cout << answer;
}
