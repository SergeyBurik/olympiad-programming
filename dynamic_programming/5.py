# Time limit for the program: 1 second
#
# There is a turtle in the upper left corner of
# an N x M rectangular table.
# Each cell of the table contains a number.
# The turtle can move to the right or down (not diagonally),
# with the turtle's route ending in the lower right corner of the table.
#
# Let's calculate the sum of the numbers written in
# the cells through which the turtle crawled
# (including the starting and ending cells).
# Find the largest possible value for
# this amount and the route by which this amount is reached.
#
# Input data
# The first line of the input contains two natural numbers N and M,
# not exceeding 100 - the size of the table.
# Then there are N lines,
# each of which contains M numbers separated by spaces -
# the description of the table.
# All numbers in the cells of
# the table are integers and can take values from 0 to 100.
#
# Output
# The first line of the output contains the maximum possible amount,
# the second - the route on which this amount is reached.
# The route is displayed as a sequence,
# which should contain N - 1 letter D,
# which means moving down and M - 1 letter R,
# which means moving to the right.
# If there are several such sequences,
# it is necessary to output exactly one (any) of them.

# input	      output
# 3 4         9
# 1 1 2 1     D R D R R
# 2 2 1 1
# 2 1 2 1

n, m = map(int, input().split())
A = [0] * (n + 1)
for i in range(1, n + 1):
    A[i] = [0] + list(map(int, input().split()))
INF = 10 ** 9
F = [[-INF] * (m + 1) for i in range(n + 1)]
F[1][0] = 0
for i in range(1, n + 1):
    for j in range(1, m + 1):
        F[i][j] = max(F[i - 1][j], F[i][j - 1]) + A[i][j]
print(F[n][m])
Answer = []
i = n
j = m

while (i, j) != (1, 1):
    if F[i - 1][j] > F[i][j - 1]:
        Answer += "D"
        i -= 1
    else:
        Answer += "R"
        j -= 1
print(" ".join(Answer[::-1]))