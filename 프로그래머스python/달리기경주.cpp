vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    int pos = 0;
    string temp = "";
    for (auto i : callings) {
        while (true) {
            if (players[pos] == i) {
                temp = players[pos - 1];
                players[pos - 1] = players[pos];
                players[pos] = temp;
                pos = 0;
                break;
            }pos++;
        }
    }
    return answer = players;
}


int main(void) {
    
    vector<string> callings{ "kai", "kai", "mine", "mine" };
    vector<string> players{ "mumu", "soe", "poe", "kai", "mine" };
    vector<string> answer;
    int pos = 0;
    string temp = "";
    unordered_map<string, int> m_players;

    for (int i = 0; i < players.size(); i++) {
        m_players[callings[i]] = i;
    }

    

    for (auto i : callings) {
        for (auto j : m_players) {
            if (j.second == m_players[i] - 1) {
                temp = j.first;
                //cout << temp<<endl;
                break;
            }
        }
        m_players[i]--;
        m_players[temp]++;
 
    }

    for (auto j : m_players) {
        //cout << j.first << j.second << endl;
        answer[j.second] = j.first;
    }

    for (auto i : answer) {
        cout << i << ", ";
    }
    return 0;
}



///////

int main(void) {
    
    vector<string> callings{ "kai", "kai", "mine", "mine" };
    vector<string> players{ "mumu", "soe", "poe", "kai", "mine" };
    vector<string> answer;
    int pos = 0;
    string temp = "";
    unordered_map<string, int> m_players;

    for (int i = 0; i < players.size(); i++) {
        m_players[players[i]] = i;
    }

    for (auto i : callings) {
        pos = m_players[i];//위치 찾기
        cout << players[pos-1] << ", " << players[pos ] << endl;
        swap(players[pos], players[pos - 1]);
        cout << players[pos-1] << ", " << players[pos ]<<endl;
        m_players[players[pos]] = pos;//위치 변경
        m_players[players[pos - 1]] = pos - 1;//위치 변경
    }
    return 0;
}
