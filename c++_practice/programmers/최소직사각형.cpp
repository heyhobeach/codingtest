
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
