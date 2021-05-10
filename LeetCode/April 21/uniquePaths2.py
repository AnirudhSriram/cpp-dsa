class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid) -> int:
        row = len(obstacleGrid)
        col = len(obstacleGrid[0])
        return self.uniquePaths(row, col, obstacleGrid, [0,0])
        
    def uniquePaths(self, m: int, n: int, grid,currPos, memo = {}) -> int:
        i = currPos[0]
        j = currPos[1]
        if i == len(grid) and j == len(grid[0]):
            return 1

        if(m==1 and n == 1):
            return 1
        if(m==0 or n==0):
            return 0

        if("{},{}".format(i,j) in memo):
            return memo["{},{}".format(i,j)]

        memo["{},{}".format(m,n)] = 0
        if grid[i-1][j] != 1:
            memo["{},{}".format(i,j)] += self.uniquePaths(m-1,n, grid,[])
        if grid[m][n-1] != 1 :
            memo["{},{}".format(j,i)] += self.uniquePaths(m,n-1, grid)
         
        return memo["{},{}".format(i,j)]

x = Solution()
print(x.uniquePathsWithObstacles([[0,0,0],[0,1,0],[0,0,0]]))