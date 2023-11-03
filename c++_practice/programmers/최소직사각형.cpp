
template<typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
T Max(const T& num1, const T& num2) {
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int main(void) {//최소직사각형 완전탐색
    vector<vector<int>> sizes{ {60, 50} ,{30, 70},{60, 30},{80, 40} };
    int answer = 0;
    int xMax = 0;
    int yMax = 0;

    for (int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] < sizes[i][1]) {
            Swap(sizes[i][0], sizes[i][1]);
        }
        //xMax = max(xMax, sizes[i][0]);
        xMax = Max(xMax, sizes[i][0]);
        yMax = Max(yMax, sizes[i][1]);
    }


    cout << endl;
    for (auto i : sizes) {
        for (auto j : i) {
            cout << j << ", ";
        }
        cout << endl;
    }
    cout << xMax << ", " << yMax << endl;
    answer = xMax * yMax;
    cout << answer;
    return 0;
}

//////////////////////////////
#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;


int findSmallestWalletSize(vector<vector<int>>& sizes, int index, int width, int height) {
    if (index == sizes.size()) {
        return width * height;
    }

    int w = sizes[index][0];
    int h = sizes[index][1];

    // 명함을 가로로 눕혔을 때와 세로로 눕혔을 때 두 가지 경우를 모두 시도
    cout << "width :" << width << " w :" << w <<"\theight :"<<height<<"h :"<<h<< endl;
    int option1 = findSmallestWalletSize(sizes, index + 1, max(width, w), max(height, h));
    cout << "width :" << width << " w :" << w << "\theight :" << height << "h :" << h << endl;
    int option2 = findSmallestWalletSize(sizes, index + 1, max(width, h), max(height, w));

    return min(option1, option2);
}

int solution(vector<vector<int>>& sizes) {
    return findSmallestWalletSize(sizes, 0, 0, 0);
}

int main() {
    vector<vector<int>> sizes = { {60, 50}, {30, 70}, {60, 30}, {80, 40} };
    int result = solution(sizes);
    cout << result << endl; // 출력값: 4000
    return 0;
}
