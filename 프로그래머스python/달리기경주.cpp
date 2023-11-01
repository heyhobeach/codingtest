

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
