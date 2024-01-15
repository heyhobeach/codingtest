

int main() {
    string file_name = "recivedData";
    int answer = 0;
    vector<string> spell{ "s", "o", "m", "d" };
    vector<string> dic{ "moos", "dzx", "smm", "sunmmo", "som" };

    int cnt = 0;
    sort(spell.begin(), spell.end());
    set<string> a = set(spell.begin(), spell.end());
    string st = "banana";
    sort(st.begin(), st.end());

    for (auto i : a) {
        //cout << i << endl;
    }

    //set<string> s;
    vector<set<char>> s;
    for (string i : dic) {
        if (i.length() != spell.size()) {
            //continue;
        }
        else {
            //vector<char> ch(i.begin(), i.end());
            sort(i.begin(), i.end());
            for (int j = 0; j< spell.size(); j++) {
                if(i[j]==spell[j][0]) {
                    cnt++;
                    //cout << format("{} 같음{}", ch[i], spell[i][0]) << endl;
                }
                else {
                    //cout << format("{} 다름{}", ch[i], spell[i][0]) << endl;
                    cnt = 0;
                    break;
                }
                //cout << format("{}번째 {}과 {}비교", i,ch[i], spell[i])<<endl;
            }
            //s.insert("string");
            //s.insert(temp);
        }
    }
    
    if (cnt == spell.size()) {
        cout << 1;
    }
    else {
        cout << 2;
    }

    return 0;
}









/////////////////
//다른사람 풀이

#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;

    for(const auto& v : dic)
    {
        bool test = true;
        for(const auto& t : spell)
        {
            if(v.find(t) == string::npos)
            {
                test= false;
                break;
            }
        }

        if(test)
        {
            answer = 1;
            break;
        }
    }
    return answer;
}
