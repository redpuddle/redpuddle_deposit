#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int matrix[5][5];
    int row, col;

    // Read the matrix input
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    // Calculate the number of moves required to bring the one to the center
    int moves = abs(row - 2) + abs(col - 2);

    cout << moves << endl;

    return 0;
}
