#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //vector<vector<string>> board{ {"blue", "red", "orange", "red"},{"red", "red", "blue", "orange"},{"blue", "orange", "red", "red"},{"orange", "orange", "red", "blue"} };
    //vector<vector<string>> board{ {"yellow", "green", "blue"},{"blue", "green", "yellow"},{"yellow", "blue", "blue"} };
    vector<vector<string>> board{ {"blue"}};
    cout << board[0][0] << endl;;
    int h = 0, w = 0;
    int n = board.size();

    int answer = 0;
    int dh[4]{ 0,1,-1,0 }, dw[4]{ 1,0,0,-1 };
    int h_check = 0, w_check = 0;



    for (int i = 0; i < 4; i++) {
        h_check = h + dh[i];
        w_check = w + dw[i];
        cout << h_check << ", " << w_check <<", "<<n << endl;
        if ((h_check >= 0&&h_check <n) && (w_check >= 0 && w_check < n)) {
            if (board[h][w] == board[h_check][w_check]) {
                answer++;
            }
        }
    }

    cout << answer << endl;
}
