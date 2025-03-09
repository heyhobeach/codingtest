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

	stack<int> stack;
	int num;
	cin >> num;

	int temp;

	for (int i = 0; i < num; i++) {
		cin >> temp;
		if (temp != 0) {
			stack.push(temp);
		}
		else {
			stack.pop();
		}

	}


	int sum = 0;
	//cout <<"size" << stack.size() << endl;
	int size = stack.size();

	for (int i = 0; i< size; i++) {
		//cout<<"reapet" << i << endl;
		sum += stack.top();
		stack.pop();
	}

	cout << sum << endl;

	return 0;
}
