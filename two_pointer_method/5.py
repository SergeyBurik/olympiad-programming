n, m = [int(x) for x in input().split()]
events = []

for i in range(n):
	l, r = sorted([int(x) for x in input().split()])
	events.append((l, -1))
	events.append((r, 1))

i = 0
for x in input().split():
	events.append((int(x), 0, i))
	i += 1

events.sort(key=lambda x: x[0])
ans = [0] * m
count = 0

for i in range(len(events)):
	count -= events[i][1]
	if events[i][1] == 0:
		ans[events[i][2]] += count

for el in ans:
	print(el, end=" ")

