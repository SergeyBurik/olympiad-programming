# Time limit for the program: 1 second
#
# You are given a rectangular board N x M (N rows and M columns).
# In the upper left corner there is a chess knight,
# which must be moved to the lower right corner of the board.
# In this case, the knight can move ONLY
# two cells down and one cell to the right,
# or two cells to the right and one cell down.
#
# It is necessary to determine how many
# different routes there are from the upper left to
# the lower right corner.
#
# Input data
# The program receives as input two natural numbers
# N and M (1 <= N, M <= 50), written in one line.
#
# Output
# Print a single number -
# the number of ways to get the knight to
# the lower right corner of the board.

# input	output
# 3 2   1
#
# 31 34  293930
#
# 1 1    1

n, m = map(int, input().split())
dp = [[0] * (m + 1) for i in range(n+1)]
dp[1][1] = 1

for i in range(2, n+1):
	for j in range(2, m+1):
		dp[i][j] = dp[i-1][j-2] + dp[i-2][j-1]

print(dp[n][m])
