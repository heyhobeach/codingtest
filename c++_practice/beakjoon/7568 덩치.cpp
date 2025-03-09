#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;




int main() {
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	pair<int, int> info;
	vector<pair<int, int>> infomap,answer;
	//int array[300]{ 0, };
	map<pair<int, int>, int> rankingboard;

	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int height;
		int weight;
		cin >> weight >> height;
		info = { weight,height };
		infomap.push_back (info);
	}

	vector<int>rank(a, 1);
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (i != j && infomap[i].first < infomap[j].first && infomap[i].second < infomap[j].second) {
				rank[i]++;
			}
		}
	}
	 
	for (auto i : rank) {
		cout<<i<<" ";
	}
	//answer = infomap;
	//
	//sort(infomap.begin(), infomap.end());
	//reverse(infomap.begin(),infomap.end());
	//int current = 1;
	//int rank = 0;
	//int minweight = 300;
	//int minheight = 300;
	//for (auto i : infomap) {
	//	if (i.second < minweight&&i.first< minheight) {
	//		//cout << ++rank << endl;
	//		rank += current;
	//		current = 0;
	//		minweight = i.second;
	//		minheight = i.first;
	//	}
	//	else {
	//		//if (i.second < minweight) {
	//		//	minweight = i.second;
	//		//}
	//		//if (i.first < minheight) {
	//		//	minheight = i.first;
	//		//}
	//		//cout << rank << endl;
	//	}
	//	rankingboard.insert({ i, rank });
	//	current++;
	//}
	//for (int i = 0; i < answer.size(); i++) {
	//	//rankingboard.at(answer[i]);
	//	cout << rankingboard.at(answer[i]) <<" ";
	//}
	


	return 0;
}
