# Time limit for the program: 2 seconds
#
# Solving the problem from the math test,
# Vasya received the answer in the form of the union of
# segments [Li, Ri] on the number line. However,
# some of these segments may intersect with each other,
# which Vasya does not like too much.
# You are required to present Vasin's answer as
# a union of the minimum number of disjoint segments.
#
# Input data
# The first line of the input contains a number N (1 <= N <= 300000).
# The following lines list pairs of integers Li and Ri (-50000 <= Li <= Ri < 5000).
# Please note that the ends of the segments can coincide,
# in this case the segment degenerates into a point.
#
# Output
# On the first line print a number -
# the number of segments in the desired union.
# In the next lines print these segments themselves in
# the same format as in the input file.
# The list of segments must be sorted in ascending order of the left end.
#
# EXAMPLE
# input
# 4
# 0 2
# 4 5
# 13
# 5 6

# Output
# 2
# 0 3
# 4 6

n = int(input())
events = []
for i in range(n):
    l, r = map(int, input().split())
    events.append((l, -1))
    events.append((r, 1))

ans = []
count = 0
for x, type in sorted(events):
    count -= type
    if count == 0 or count == 1 and type == -1:
        ans.append(x)

print(len(ans) // 2)
for i in range(0, len(ans), 2):
    print(ans[i], ans[i + 1])