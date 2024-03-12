#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string a = "ljes=njak";
	string arr[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	cin >> a;
	for (int i = 0; i < sizeof(arr) / sizeof(string); i++) {
		while (a.find(arr[i]) != string::npos) {
			a.replace(a.find(arr[i]), arr[i].length(), "!");
		}
	}
	cout << a.length();


