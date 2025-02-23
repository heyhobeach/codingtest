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

	vector<string> arr;

	clock_t start, finish;
	double duration;


	/*실행 시간을 측정하고 싶은 코드*/


	string s = "666";
	arr.push_back(s);
	int count = 1;
	int current = 667;
	int a;
	cin >> a;
	a--;
	start = clock();

	string str;
	//cin >> str;
	//cout<<str.find_last_of("666")<<endl;
	while (count <= a) {
		string temp = to_string(current);
		if (temp.find("666")!=-1) {
			arr.push_back(temp);
			count++;
		}
		current++;
	}
	vector<int> answer_vec;
	
	for (auto i : arr) {
		answer_vec.push_back(stoi(i));
	}
	sort(answer_vec.begin(), answer_vec.end());
	
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << "초" << endl;
	
	cout << arr[a] << endl;

	return 0;
}


///참고 모범답
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

	vector<string> arr;

	clock_t start, finish;
	double duration;


	/*실행 시간을 측정하고 싶은 코드*/


	string s = "666";
	arr.push_back(s);
	int count = 1;
	int current = 667;
	int a;
	cin >> a;
	a--;
	start = clock();

	string str;
	//cin >> str;
	//cout<<str.find_last_of("666")<<endl;
	while (count <= a) {
		int temp = current;
		while (temp !=0) {
			//cout << temp << endl;
			if (temp % 1000 == 666) {
				//cout << temp << endl;
				count++;
				arr.push_back(to_string(temp));
				break;
			}temp /= 10;
		}
		current++;
	}
	vector<int> answer_vec;
	
	for (auto i : arr) {
		answer_vec.push_back(stoi(i));
	}
	sort(answer_vec.begin(), answer_vec.end());
	
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << duration << "초" << endl;
	
	cout << answer_vec[a] << endl;

	return 0;
}
