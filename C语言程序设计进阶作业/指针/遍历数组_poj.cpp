#include <iostream>
using namespace std;
 
const int maxn = 105;
 
int matrix[maxn][maxn];
 
int main() {
    int row, col, i, j, c, r;
    cin >> row >> col;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }
    for (i = 0; i < row + col - 1; i++) {
        c = i > col - 1 ? col - 1 : i;
        r = i - c;
        while (r < row && c >= 0) {
            cout << matrix[r][c] << endl;
            r++;
            c--;
        }
    }
}
