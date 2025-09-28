
#include <iostream>
#include <vector>
using namespace std;

void flip(int &n) {
    n = !n; // toggle between 0 and 1
}

int main() {
    vector<vector<int>> grid(3, vector<int>(3, 1)); // all start as 1

    // directions: (row, col) offsets (self + 4 neighbors)
    int dr[5] = {0, 1, -1, 0, 0};
    int dc[5] = {0, 0, 0, 1, -1};

    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            int a;
            cin >> a;
            // apply flips 'a' times
            for (int k = 0; k < a; k++) {
                for (int d = 0; d < 5; d++) {
                    int nr = r + dr[d];
                    int nc = c + dc[d];
                    if (nr >= 0 && nr < 3 && nc >= 0 && nc < 3) {
                        flip(grid[nr][nc]);
                    }
                }
            }
        }
    }

    // print result
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            cout << grid[r][c];
        }
        cout << endl;
    }

    return 0;
}
