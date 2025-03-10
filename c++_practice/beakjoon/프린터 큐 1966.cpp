#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<stack>

#define _CRT_SECURE_NO_WARNINGS 

using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		int n, m;
		cin >> n>> m;
		deque<pair< int,bool>> printque = {};
		int max = 0;
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			//if (temp > max) {
			//	max = temp;
			//}
			printque.push_back({ temp,false });
		}

		int num = m+1;
		int count = 0;
		bool ispop = false;
		int maxelement = max_element(printque.begin(), printque.end()) - printque.begin();
		max = printque[maxelement].first;
		printque[m].second = true;
		//cout << "max :" << max << endl;
		while (true) {

			if(printque[0].first<max)
			{//우선 순위가 아닐때 뒤로 삽입 동작


				if (num < 0) {
					//cout << "가장 앞" << endl;
					num = printque.size()-1;
				}
				num--;
				auto temp = printque.front();
				printque.pop_front();
				printque.push_back(temp);
				//count++;
				continue;
			}
			else {
				count++;
				if (printque.at(0).second) {

					cout << count << endl;
					ispop = true;
				}

				//cout << printque.at(0).first << " ";

				printque.pop_front();
				if (printque.size() == 0) {
					ispop = true;
				}
			}

			
			if (ispop) {
				break;
			}
			else {
				int maxelement = max_element(printque.begin(), printque.end()) - printque.begin();
				max = printque[maxelement].first;
				//cout << "max :" << max << endl;
			}
		}
	}



	return 0;
}
