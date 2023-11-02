
int main(void) {
    vector<int> number{ -2, 3, 0, 2, -5 };
    int answer = 0;
    for (int i = 0; i < number.size()-2; i++) {
        //cout <<"first"<< number[i] << ", ";
        //cout << endl;
        for (int j = i+1; j < number.size()-1; j++)
        {
            //cout << "second"<<number[j] << ", ";
            //cout << endl;
            for (int k = j+1; k < number.size(); k++) {
                //cout << "third"<<number[k] << ", ";
                //cout << endl;

                cout << number[i] << ", " << number[j] << ", " << number[k] << endl;
                if ((number[i] + number[j] + number[k]) == 0) {
                    cout << "삼총사" << endl;
                    answer++;
                }
            }
        }
    }
    cout << endl;
    cout << answer;
    return 0;
}
