//count island(DFS on matrix)
#include <stdio.h>

#define ROW 4
#define COL 5

// DFS helper function
void dfs(int grid[ROW][COL], int i, int j) {
    // Boundary check
    if (i < 0 || j < 0 || i >= ROW || j >= COL || grid[i][j] == 0) {
        return;
    }

    // Mark current cell as visited
    grid[i][j] = 0;

    // Explore 4 directions (up, down, left, right)
    dfs(grid, i - 1, j); // up
    dfs(grid, i + 1, j); // down
    dfs(grid, i, j - 1); // left
    dfs(grid, i, j + 1); // right
}

// Function to count islands
int countIslands(int grid[ROW][COL]) {
    int count = 0;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (grid[i][j] == 1) {
                dfs(grid, i, j);
                count++;
            }
        }
    }
    return count;
}

int main() {
    int grid[ROW][COL] = {
        {1, 1, 0, 0, 0},
        {1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0}
    };

    printf("Number of islands = %d\n", countIslands(grid));
    return 0;
}

