#include <string>
#include <vector>
#include <regex>

using namespace std;


string buf = "";//영어를 숫자로
string Change(string s) {
    if (s == "one") s = '1';
    else if (s == "two") s= '2';
    else if (s == "three") s = '3';
    else if (s == "four") s = '4';
    else if (s == "five") s = '5';
    else if (s == "six") s = '6';
    else if (s == "seven") s = '7';
    else if (s == "eight") s = '8';
    else if (s == "nine") s = '9';
    else if (s == "zero") s = '0';
    else {
        return "";
    }

    buf = "";
    return s;
}

int solution(string s) {
    s = regex_replace(s, regex("zero"), "0");//정규식 부분
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");
    return stoi(s);
}

int main() {
    string answer = "";//if 다음 switch
    string s = "2three45sixseven";
    
    for (auto i : s) {
        if (i >= 'a' && i <= 'z') {
            cout << "char :" << i << endl;
            buf += i;
        }
        else {
            answer += i;
            cout << "num :" << i << endl;
        }
        answer += Change(buf);
    }
    cout << stoi(answer);
    //cout << buf << endl;
    return 0;
}
/////////////////////////////////////////////////////////////////////////


string buf = "";
string Change(string s) {
    if (s == "one") s = '1';
    else if (s == "two") s= '2';
    else if (s == "three") s = '3';
    else if (s == "four") s = '4';
    else if (s == "five") s = '5';
    else if (s == "six") s = '6';
    else if (s == "seven") s = '7';
    else if (s == "eight") s = '8';
    else if (s == "nine") s = '9';
    else if (s == "zero") s = '0';
    else {
        return "";
    }

    buf = "";
    return s;
}

int solution(string s) {
    string answer = "";
    
    for(auto i:s){
        if(i>='a'&&i<='z'){
            buf+=i;
        }else{
            answer+=i;
        }
        answer+=Change(buf);
    }

    return stoi(answer);
}
