from itertools import combinations

def solve(state, initial):
	if len(state) == 1:
		return state[0] - 1 if initial else (state[0] - 1)**2
	ret = 0
	product = 1
	a = 1
	for x in state:
		product *= x
		a       *= x-1
	for i in range(1, len(state)):
		for substate in combinations(state, i):
			if substate in dp:
				ret += dp[substate]
			else:
				ret += solve(substate, False)
	if initial:
		dp[state] = (a+ret) / (product-a)
	else:
		dp[state] = a * (a+ret) / (product-a)
	return dp[state]

dp = {}

hist = list(map(lambda s: int(s.split('d')[0]), input().split(' ')))
dice = [4, 6, 8, 10, 12, 20]
state = []
for i in range(len(hist)):
	state += [dice[i]] * hist[i]
state = tuple(state)

if len(state) == 0:
	print(f"{0:.5f}")
else:
	print(f"{solve(state, True):.5f}")

"""
Input examples:
0d4 0d6 0d8 0d10 0d12 0d20
1d4 0d6 0d8 0d10 0d12 0d20
1d4 2d6 0d8 3d10 1d12 0d20
3d4 3d6 4d8 4d10 2d12 1d20
2d4 2d6 4d8 4d10 4d12 2d20
"""
