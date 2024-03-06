int NumPaths(int row, int col, int n) {
    if (row == n)
        return 1;
    else if (col == n)
        return 1; // If we reach the rightmost column, there's only one way to move (down).
    else
        return NumPaths(row + 1, col, n) + NumPaths(row, col + 1, n); // Move down or move right.
}


#include <iostream>

using namespace std;

int NumPaths(int row, int col, int n, int dp[101][101]);

int main() {
    int n = 4; // Grid size
    int dp[101][101]; // Dynamic programming array
    memset(dp, -1, sizeof(dp)); // Initialize dp array with -1

    cout << "Number of paths: " << NumPaths(1, 1, n, dp) << endl;

    return 0;
}

#include <iostream>

using namespace std;

int NumPaths(int row, int col, int n, int dp[101][101]);

int main() {
    int n = 4; // Grid size
    int dp[101][101]; // Dynamic programming array
    memset(dp, -1, sizeof(dp)); // Initialize dp array with -1

    cout << "Number of paths: " << NumPaths(1, 1, n, dp) << endl;

    return 0;
}

