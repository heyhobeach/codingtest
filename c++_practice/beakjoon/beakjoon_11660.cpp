//구간합구하기 5
//다른 구간합 문제도 풀어봐야할듯

#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	vector<int>answer;
	
	vector<int>a;
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	int num1 = 0, num2 = 0,input = 0;

	cin >> num1 >> num2;
	vector<vector<int>> sum(num1+1,vector<int>(num1+1,0));//앞 뒤 전부 +1 값 해줘야함 1 더 큰 배열을 생성해서 범위 벗어나는 구간 더 할때 0으로 값을 넣어주기 위함


	
	for (int i = 1; i <= num1; i++) {// 값 입력과 동시에 구간합 생성
		for (int j = 1; j <= num1; j++) {
			cin >> input;
			sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + input;
		}
	}


	for (int i = 0; i < num2; i++) {
			cin >> x1 >> y1 >> x2 >> y2;
			cout << sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1] << endl;//머리로 그림을 한번 그려볼 것, cout으로 출력시 오류 발생
	}

}
