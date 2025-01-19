#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


int AnserFunc(int answer,int sum,int pivot) {

	if (pivot<=sum) {
		return answer;
	}
	//cout << answer << "," << sum << endl;
	return  AnserFunc(answer + 1, sum+(answer*6),pivot);

}


int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int pivot;
	int answer = 1;
	cin >> pivot;

	if (pivot == 1) {
		cout << 1 << endl;
		return 0;
	}
	cout<<AnserFunc(0,1,pivot)<<endl;

	return 0;
}

