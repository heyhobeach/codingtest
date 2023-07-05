#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer(queries.size(),-1);
    vector<int> temp;
    
    for(int i=0;i<queries.size();i++){
        for(int j=queries[i][0];j<=queries[i][1];j++){//쿼리에서 시작 끝 부분 으로 for문 돌기
            if(arr[j]>queries[i][2]){//만약 해당 숫자가 조건 보다크다면 temp 에 원소 넣음
                temp.push_back(arr[j]);
            }
        }
        sort(temp.begin(),temp.end());//최소값 찾기위해 오름차순정렬
        if(temp.size()==0){//만약 temp가 비었을 경우 continue로 넘어감
            continue;
        }
        answer[i]=temp[0];//가장 앞이 최소값일거임
        temp.clear();//다음을 위해 temp비워줌
    }
    return answer;
}
