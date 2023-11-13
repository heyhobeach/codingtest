int main() {
    string s = "foobar";
    vector<int> answer(s.length(),-1);

    for (int i = 0; i < s.length(); i++) {
        //cout << s[i] << endl;
        cout << s[i]<<": ";
        int cnt = 1;
        for (int j = i-1; j >=0; j--) {

            if (s[j] == s[i]) {
                cout << cnt << endl;
                //cnt = 1;
                answer[i] = cnt;
                break;
            }
            cnt++;
            //cout << s[j];
        }cout << endl;
        
    }

    for (int i = 0; i < s.length(); i++) {
        cout << s[i] << endl;
    }
    return 0;
}
