t = int(input())

ans = []

for _ in range(t):
    x, y = map(int, input().split())

    if x == 0 and y == 0:
        ans.append(0)
        continue

    s = x + y

    # The sum must be even
    if s % 2 != 0:
        ans.append(-1)
        continue

    k = s // 2

    if k == 0:
        ans.append(0)
        continue

    if k % 2 == 1:
        # odd k
        if x == k and y == k:
            ans.append(2*k - 1)
        elif x == k + 1 and y == k - 1:
            ans.append(2*k)
        else:
            ans.append(-1)

    else:
        # even k
        if x == k + 1 and y == k - 1:
            ans.append(2*k - 1)
        elif x == k and y == k:
            ans.append(2*k)
        else:
            ans.append(-1)

for a in ans:
    print(a)