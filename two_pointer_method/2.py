# In the park of the city of Pittsburgh
#  there is a wonderful alley
#  consisting of N trees planted in one row, each of K varieties.
#  Due to the fact that Pittsburgh is hosting
#  the Byteland Open Programming Championship,
#  it was decided to build a huge arena for the competition.
#  So, according to this plan, the entire alley was to be cut down.
#  However, the Ministry of Trees and Bushes opposed this decision.
#  According to the new construction plan,
#  all trees that will not be cut down will form one continuous segment.
#  Each of the K tree species must be preserved at least one copy.
#  You are tasked with finding the shortest segment that satisfies the specified constraints.
#
# INPUT DATA
# The first line of the input file contains two numbers N and K (1 ≤ N, K ≤ 250000).
#  The second line of the input file contains N numbers (separated by spaces),
#  the i-th number of the second line specifies the color of the i-th tree
#  from the left in the alley. It is guaranteed that at least one tree of each color is present.
#
# OUTPUT
# Print into the output file two numbers,
#  the coordinates of the left and right segments of
#  the minimum length that satisfy the condition.
#  If there are several optimal answers, you can do any.
#
# input
# 5 3
# 1 2 1 3 2
# Output
# 2 4
#
# 6 4
# 2 4 2 3 3 1
# Output
# 2 6

from collections import Counter
n, k = map(int, input().split())
*a, = map(int, input().split())

c = Counter(a)

l = 0
r = n - 1
while c[a[l]] != 1:
	c[a[l]] -= 1
	l += 1
while c[a[r]] != 1:
	c[a[r]] -= 1
	r -= 1

print(l + 1, r + 1)