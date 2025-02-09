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

	int n = 4;
	int m = 5;
	int repeat = 0;

	cin >> repeat;

	for (int i = 0; i < repeat; i++) {
		cin >> n >> m;
		n++;
		m++;
		int** arr = new int* [n];
		for (int i = 0; i < n; i++) {
			arr[i] = new int[m];
			arr[i][0] = 1;
			for (int j = 1; j < m; j++) {
				if (i == 0) {
					arr[i][j] = j + 1;
				}
				else {
					arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
				}

			}

		}


		cout << arr[n-1][m-2]<<endl;
	}

	return 0;
}



