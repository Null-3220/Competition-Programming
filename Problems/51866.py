n = list(map(int, input().strip().split()))
v = list(map(int, input().strip().split()))
def cal():
    if n[1] == 1:
        print(max(v))
    elif n[1] >= 3:
        print(min(v))
    else:
        m = min(v)
        if v[0] == m or v[-1] == 0:
            print(m)
        else:
            print(min((v[0], v[-1])))
cal()