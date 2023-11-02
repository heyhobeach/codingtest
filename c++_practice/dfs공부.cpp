int CalculateArea(const vector<vector<int>>& sizes, vector<int>& selected, int index) {
    if (index == sizes.size()) {
        int xMax = 0;
        int yMax = 0;
        for (int i = 0; i < sizes.size(); i++) {
            if (selected[i] == 1) {
                xMax = max(xMax, sizes[i][0]);
                yMax = max(yMax, sizes[i][1]);
            }
        }
        return xMax * yMax;
    }

    selected[index] = 0; // Not selecting the current rectangle
    //cout << "0 :" << index<<endl;
    int area1 = CalculateArea(sizes, selected, index + 1);
    cout << "0 :" << index<< "\tarea1 : "<< area1 << endl;

    selected[index] = 1; // Selecting the current rectangle
    //cout << "1 :" << index <<endl;
    int area2 = CalculateArea(sizes, selected, index + 1);
    cout << "1 :" << index<< "\tarea2 :" << area2 << endl;
    return area2;
    //return max(area1, area2);
}

int main() {
    vector<vector<int>> sizes = { {60, 50},{30,70}, {60, 30}, {80, 40}};
    vector<int> selected(sizes.size(), 0); // 0 represents not selected
    int answer = CalculateArea(sizes, selected, 0);
    cout << "The maximum area is: " << answer << endl;

    return 0;
}
