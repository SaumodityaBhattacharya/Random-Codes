#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int sr = 0, sc = 0, er = m - 1, ec = n - 1;
    bool flag = true;

    cout << "[";
    while (sr <= er && sc <= ec) {
        // Left → Right
        for (int i = sc; i <= ec; i++) {
            if (!flag) cout << ", ";
            cout << matrix[sr][i];
            flag = false;
        }
        sr++;

        // Top → Bottom
        for (int i = sr; i <= er; i++) {
            if (!flag) cout << ", ";
            cout << matrix[i][ec];
            flag = false;
        }
        ec--;

        // Right → Left
        if (sr <= er) {
            for (int i = ec; i >= sc; i--) {
                if (!flag) cout << ", ";
                cout << matrix[er][i];
                flag = false;
            }
            er--;
        }

        // Bottom → Top
        if (sc <= ec) {
            for (int i = er; i >= sr; i--) {
                if (!flag) cout << ", ";
                cout << matrix[i][sc];
                flag = false;
            }
            sc++;
        }
    }
    cout << "]";
}

int main() {
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    spiralPrint(mat);
}
